// $Id$

//==========================================================================
//
//
// = FILENAME
//     client.cpp
//
// = DESCRIPTION
//
//     This is a simple foo client implementation.  Also looks out for
//     forwarding exceptions
//
// = AUTHOR
//     Irfan Pyarali
//
//==========================================================================

#include "tao/corba.h"
#include "ace/streams.h"
#include "ace/Get_Opt.h"
#include "ace/Read_Buffer.h"
#include "FooC.h"

ACE_RCSID(Forwarding, client, "$Id$")

static char *server_IOR_ = 0;

static int iterations = 6;

static int
read_ior (char *filename)
{
  // Open the file for reading.
  ACE_HANDLE f_handle_ = ACE_OS::open (filename,0);

  if (f_handle_ == ACE_INVALID_HANDLE)
    ACE_ERROR_RETURN ((LM_ERROR,
		       "Unable to open %s for reading: %p\n",
		       filename,
                       "ACE_OS::open"),
		      -1);
  ACE_Read_Buffer ior_buffer (f_handle_);
  server_IOR_ = ior_buffer.read ();

  if (server_IOR_ == 0)
    ACE_ERROR_RETURN ((LM_ERROR,
                       "Unable to allocate memory to read ior: %p\n",
                       "ACE_Read_Buffer::read"),
                      -1);
  return 0;
}

static int
parse_args (int argc, char **argv)
{
  ACE_Get_Opt get_opts (argc, argv, "f:i:k:O:");
  int c;
  int result;

  while ((c = get_opts ()) != -1)
    switch (c)
      {
      case 'f': // read the IOR from the file.
        result = read_ior (get_opts.optarg);
        if (result < 0)
          ACE_ERROR_RETURN ((LM_ERROR,
			     "Unable to read ior from %s : %p\n",
			     get_opts.optarg,
                             "read_ior"),
			    -1);
        break;
      case 'k':
        server_IOR_ = get_opts.optarg;
        break;
      case 'i':
        iterations = ::atoi (get_opts.optarg);
        break;
      case '?':
      default:
        ACE_ERROR_RETURN ((LM_ERROR,
                           "usage:  %s"
                           "-f server_IOR_file"
                           "\n",
                           argv [0]),
                          -1);
      }

  if (server_IOR_ == 0)
    ACE_ERROR_RETURN ((LM_ERROR,
                       "Please specify the IOR for the servant\n"), -1);

  // Indicates successful parsing of command line.
  return 0;
}

void
do_calls (Foo_ptr foo_ptr,
          CORBA::Environment &ACE_TRY_ENV)
{
  for (int i = 1; i <= iterations; i++)
    {
      // About half way through
      if (i % 3 == 0)
        {
          foo_ptr->forward (ACE_TRY_ENV);
          ACE_CHECK;
        }
      else
        {
          // Invoke the doit() method of the foo reference.
          CORBA::Long result = foo_ptr->doit (ACE_TRY_ENV);
          ACE_CHECK;

          // Print the result of doit () method of the foo reference.
          ACE_DEBUG ((LM_DEBUG,
                      "doit() returned %d \n",
                      result));
        }
    }
}


int
main (int argc, char **argv)
{
  ACE_DECLARE_NEW_CORBA_ENV;

  ACE_TRY
    {
      // Initialize the ORB
      CORBA::ORB_var orb = CORBA::ORB_init (argc, argv, 0, ACE_TRY_ENV);
      ACE_TRY_CHECK;

      // Initialize options based on command-line arguments.
      int parse_args_result = parse_args (argc, argv);
      if (parse_args_result != 0)
        return parse_args_result;

      // Get an object reference from the argument string.
      CORBA::Object_var object = orb->string_to_object (server_IOR_, ACE_TRY_ENV);
      ACE_TRY_CHECK;

      // Try to narrow the object reference to a Foo reference.
      Foo_var foo_var = Foo::_narrow (object.in (), ACE_TRY_ENV);
      ACE_TRY_CHECK;

      CORBA::String_var original_location =
        orb->object_to_string (foo_var.in (), ACE_TRY_ENV);
      ACE_TRY_CHECK;

      do_calls (foo_var.in (),
                ACE_TRY_ENV);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      ACE_PRINT_EXCEPTION (ACE_ANY_EXCEPTION, "Exception caught");
      return -1;
    }
  ACE_ENDTRY;
  ACE_CHECK_RETURN (-1);

  return 0;
}
