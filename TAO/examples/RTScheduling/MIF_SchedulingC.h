// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:151

#ifndef _TAO_IDL_____MIF_SCHEDULINGC_H_
#define _TAO_IDL_____MIF_SCHEDULINGC_H_


#include "tao/corba.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/RTScheduling/RTScheduler.h"
#include "tao/RTCORBA/RTCORBAC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO 
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:48

TAO_NAMESPACE  MIF_Scheduling
{
  
  // TAO_IDL - Generated from
  // be/be_interface.cpp:584

#if !defined (_MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__ODDS_N_ENDS_CH_)
#define _MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__ODDS_N_ENDS_CH_
  
  class SegmentSchedulingParameterPolicy;
  typedef SegmentSchedulingParameterPolicy *SegmentSchedulingParameterPolicy_ptr;
  struct tao_SegmentSchedulingParameterPolicy_life;
  
  typedef
    TAO_Objref_Var_T<
        SegmentSchedulingParameterPolicy,
        tao_SegmentSchedulingParameterPolicy_life
      >
    SegmentSchedulingParameterPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        SegmentSchedulingParameterPolicy,
        tao_SegmentSchedulingParameterPolicy_life
      >
    SegmentSchedulingParameterPolicy_out;
  
  struct  tao_SegmentSchedulingParameterPolicy_life
  {
    static SegmentSchedulingParameterPolicy_ptr tao_duplicate (SegmentSchedulingParameterPolicy_ptr);
    static void tao_release (SegmentSchedulingParameterPolicy_ptr);
    static SegmentSchedulingParameterPolicy_ptr tao_nil (void);
    static CORBA::Boolean tao_marshal (
        SegmentSchedulingParameterPolicy_ptr,
        TAO_OutputCDR &
      );
  };
  
  struct  tao_SegmentSchedulingParameterPolicy_cast
  {
    static SegmentSchedulingParameterPolicy_ptr tao_narrow (
        CORBA::Object_ptr
        ACE_ENV_ARG_DECL
      );
    static CORBA::Object_ptr tao_upcast (void *);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:53

#if !defined (_MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY_CH_)
#define _MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY_CH_
  
  class  SegmentSchedulingParameterPolicy
    : public virtual CORBA::Policy
  {
  public:
    typedef SegmentSchedulingParameterPolicy_ptr _ptr_type;
    typedef SegmentSchedulingParameterPolicy_var _var_type;
    static int _tao_class_id;
    
    // The static operations.
    static SegmentSchedulingParameterPolicy_ptr _duplicate (SegmentSchedulingParameterPolicy_ptr obj);
    
    static SegmentSchedulingParameterPolicy_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static SegmentSchedulingParameterPolicy_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static SegmentSchedulingParameterPolicy_ptr _nil (void)
      {
        return (SegmentSchedulingParameterPolicy_ptr)0;
      }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46
    
    virtual CORBA::Short importance (
        
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46
    
    virtual void importance (
        CORBA::Short importance
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:210
    
    virtual void *_tao_QueryInterface (ptrdiff_t type);
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    SegmentSchedulingParameterPolicy (void);
    virtual ~SegmentSchedulingParameterPolicy (void);
  
  private:
    SegmentSchedulingParameterPolicy (const SegmentSchedulingParameterPolicy &);
    void operator= (const SegmentSchedulingParameterPolicy &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_SegmentSchedulingParameterPolicy;
  
  // TAO_IDL - Generated from
  // be/be_interface.cpp:584

#if !defined (_MIF_SCHEDULING_MIF_SCHEDULER__ODDS_N_ENDS_CH_)
#define _MIF_SCHEDULING_MIF_SCHEDULER__ODDS_N_ENDS_CH_
  
  class MIF_Scheduler;
  typedef MIF_Scheduler *MIF_Scheduler_ptr;
  struct tao_MIF_Scheduler_life;
  
  typedef
    TAO_Objref_Var_T<
        MIF_Scheduler,
        tao_MIF_Scheduler_life
      >
    MIF_Scheduler_var;
  
  typedef
    TAO_Objref_Out_T<
        MIF_Scheduler,
        tao_MIF_Scheduler_life
      >
    MIF_Scheduler_out;
  
  struct  tao_MIF_Scheduler_life
  {
    static MIF_Scheduler_ptr tao_duplicate (MIF_Scheduler_ptr);
    static void tao_release (MIF_Scheduler_ptr);
    static MIF_Scheduler_ptr tao_nil (void);
    static CORBA::Boolean tao_marshal (
        MIF_Scheduler_ptr,
        TAO_OutputCDR &
      );
  };
  
  struct  tao_MIF_Scheduler_cast
  {
    static MIF_Scheduler_ptr tao_narrow (
        CORBA::Object_ptr
        ACE_ENV_ARG_DECL
      );
    static CORBA::Object_ptr tao_upcast (void *);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:53

#if !defined (_MIF_SCHEDULING_MIF_SCHEDULER_CH_)
#define _MIF_SCHEDULING_MIF_SCHEDULER_CH_
  
  class  MIF_Scheduler
    : public virtual RTScheduling::Scheduler
  {
  public:
    typedef MIF_Scheduler_ptr _ptr_type;
    typedef MIF_Scheduler_var _var_type;
    static int _tao_class_id;
    
    // The static operations.
    static MIF_Scheduler_ptr _duplicate (MIF_Scheduler_ptr obj);
    
    static MIF_Scheduler_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static MIF_Scheduler_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static MIF_Scheduler_ptr _nil (void)
      {
        return (MIF_Scheduler_ptr)0;
      }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46
    
    virtual ::MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr create_segment_scheduling_parameter (
        CORBA::Short segment_importance
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:210
    
    virtual void *_tao_QueryInterface (ptrdiff_t type);
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    MIF_Scheduler (void);
    virtual ~MIF_Scheduler (void);
  
  private:
    MIF_Scheduler (const MIF_Scheduler &);
    void operator= (const MIF_Scheduler &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:44
  
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_MIF_Scheduler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

}
TAO_NAMESPACE_CLOSE // module MIF_Scheduling

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

 void operator<<= (CORBA::Any &, MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr); // copying
 void operator<<= (CORBA::Any &, MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr *); // non-copying
 CORBA::Boolean operator>>= (const CORBA::Any &, MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

 void operator<<= (CORBA::Any &, MIF_Scheduling::MIF_Scheduler_ptr); // copying
 void operator<<= (CORBA::Any &, MIF_Scheduling::MIF_Scheduler_ptr *); // non-copying
 CORBA::Boolean operator>>= (const CORBA::Any &, MIF_Scheduling::MIF_Scheduler_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:48

#ifndef __ACE_INLINE__

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:64

#endif /* __ACE_INLINE__ */

// TAO_IDL - Generated from
// be/be_codegen.cpp:1055

#if defined (__ACE_INLINE__)
#include "MIF_SchedulingC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#endif /* ifndef */

