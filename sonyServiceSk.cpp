// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include "sonyService.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_1;



OpenHRP::sonyService_ptr OpenHRP::sonyService_Helper::_nil() {
  return ::OpenHRP::sonyService::_nil();
}

::CORBA::Boolean OpenHRP::sonyService_Helper::is_nil(::OpenHRP::sonyService_ptr p) {
  return ::CORBA::is_nil(p);

}

void OpenHRP::sonyService_Helper::release(::OpenHRP::sonyService_ptr p) {
  ::CORBA::release(p);
}

void OpenHRP::sonyService_Helper::marshalObjRef(::OpenHRP::sonyService_ptr obj, cdrStream& s) {
  ::OpenHRP::sonyService::_marshalObjRef(obj, s);
}

OpenHRP::sonyService_ptr OpenHRP::sonyService_Helper::unmarshalObjRef(cdrStream& s) {
  return ::OpenHRP::sonyService::_unmarshalObjRef(s);
}

void OpenHRP::sonyService_Helper::duplicate(::OpenHRP::sonyService_ptr obj) {
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
}

OpenHRP::sonyService_ptr
OpenHRP::sonyService::_duplicate(::OpenHRP::sonyService_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
  return obj;
}

OpenHRP::sonyService_ptr
OpenHRP::sonyService::_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


OpenHRP::sonyService_ptr
OpenHRP::sonyService::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

OpenHRP::sonyService_ptr
OpenHRP::sonyService::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_sonyService _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_sonyService* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_sonyService;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* OpenHRP::sonyService::_PD_repoId = "IDL:OpenHRP/sonyService:1.0";


OpenHRP::_objref_sonyService::~_objref_sonyService() {
  
}


OpenHRP::_objref_sonyService::_objref_sonyService(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::OpenHRP::sonyService::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
OpenHRP::_objref_sonyService::_ptrToObjRef(const char* id)
{
  if( id == ::OpenHRP::sonyService::_PD_repoId )
    return (::OpenHRP::sonyService_ptr) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::OpenHRP::sonyService::_PD_repoId) )
    return (::OpenHRP::sonyService_ptr) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  void
class _0RL_cd_457ccd98b3f23528_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_457ccd98b3f23528_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
    
  
  static const char* const _user_exns[];

  
};

const char* const _0RL_cd_457ccd98b3f23528_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_10000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->start();


}

void OpenHRP::_objref_sonyService::start()
{
  _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_10000000, "start", 6);


  _invoke(_call_desc);



}
// Proxy call descriptor class. Mangled signature:
//  void_i_cdouble_i_cdouble_i_cdouble_i_cdouble_i_cdouble_i_cdouble
class _0RL_cd_457ccd98b3f23528_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_457ccd98b3f23528_20000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::Double arg_0;
  ::CORBA::Double arg_1;
  ::CORBA::Double arg_2;
  ::CORBA::Double arg_3;
  ::CORBA::Double arg_4;
  ::CORBA::Double arg_5;
};

void _0RL_cd_457ccd98b3f23528_20000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;
  arg_1 >>= _n;
  arg_2 >>= _n;
  arg_3 >>= _n;
  arg_4 >>= _n;
  arg_5 >>= _n;

}

void _0RL_cd_457ccd98b3f23528_20000000::unmarshalArguments(cdrStream& _n)
{
  (::CORBA::Double&)arg_0 <<= _n;
  (::CORBA::Double&)arg_1 <<= _n;
  (::CORBA::Double&)arg_2 <<= _n;
  (::CORBA::Double&)arg_3 <<= _n;
  (::CORBA::Double&)arg_4 <<= _n;
  (::CORBA::Double&)arg_5 <<= _n;

}

const char* const _0RL_cd_457ccd98b3f23528_20000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_457ccd98b3f23528_20000000* tcd = (_0RL_cd_457ccd98b3f23528_20000000*)cd;
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->setObjectV(tcd->arg_0, tcd->arg_1, tcd->arg_2, tcd->arg_3, tcd->arg_4, tcd->arg_5);


}

void OpenHRP::_objref_sonyService::setObjectV(::CORBA::Double x, ::CORBA::Double y, ::CORBA::Double z, ::CORBA::Double roll, ::CORBA::Double pitch, ::CORBA::Double yaw)
{
  _0RL_cd_457ccd98b3f23528_20000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_30000000, "setObjectV", 11);
  _call_desc.arg_0 = x;
  _call_desc.arg_1 = y;
  _call_desc.arg_2 = z;
  _call_desc.arg_3 = roll;
  _call_desc.arg_4 = pitch;
  _call_desc.arg_5 = yaw;

  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_40000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->testMove();


}

void OpenHRP::_objref_sonyService::testMove()
{
  _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_40000000, "testMove", 9);


  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_50000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->stepping();


}

void OpenHRP::_objref_sonyService::stepping()
{
  _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_50000000, "stepping", 9);


  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_60000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->stop();


}

void OpenHRP::_objref_sonyService::stop()
{
  _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_60000000, "stop", 5);


  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_70000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->omniWalkSwitch();


}

void OpenHRP::_objref_sonyService::omniWalkSwitch()
{
  _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_70000000, "omniWalkSwitch", 15);


  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_80000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->setFootPosR2();


}

void OpenHRP::_objref_sonyService::setFootPosR2()
{
  _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_80000000, "setFootPosR2", 13);


  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_90000000(omniCallDescriptor*, omniServant* svnt)
{
  
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->setFootPosL2();


}

void OpenHRP::_objref_sonyService::setFootPosL2()
{
  _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_90000000, "setFootPosL2", 13);


  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_a0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_457ccd98b3f23528_20000000* tcd = (_0RL_cd_457ccd98b3f23528_20000000*)cd;
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->setFootPosR(tcd->arg_0, tcd->arg_1, tcd->arg_2, tcd->arg_3, tcd->arg_4, tcd->arg_5);


}

void OpenHRP::_objref_sonyService::setFootPosR(::CORBA::Double x, ::CORBA::Double y, ::CORBA::Double z, ::CORBA::Double r, ::CORBA::Double p, ::CORBA::Double w)
{
  _0RL_cd_457ccd98b3f23528_20000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_a0000000, "setFootPosR", 12);
  _call_desc.arg_0 = x;
  _call_desc.arg_1 = y;
  _call_desc.arg_2 = z;
  _call_desc.arg_3 = r;
  _call_desc.arg_4 = p;
  _call_desc.arg_5 = w;

  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_457ccd98b3f23528_b0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_457ccd98b3f23528_20000000* tcd = (_0RL_cd_457ccd98b3f23528_20000000*)cd;
  OpenHRP::_impl_sonyService* impl = (OpenHRP::_impl_sonyService*) svnt->_ptrToInterface(OpenHRP::sonyService::_PD_repoId);
  impl->setFootPosL(tcd->arg_0, tcd->arg_1, tcd->arg_2, tcd->arg_3, tcd->arg_4, tcd->arg_5);


}

void OpenHRP::_objref_sonyService::setFootPosL(::CORBA::Double x, ::CORBA::Double y, ::CORBA::Double z, ::CORBA::Double r, ::CORBA::Double p, ::CORBA::Double w)
{
  _0RL_cd_457ccd98b3f23528_20000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_b0000000, "setFootPosL", 12);
  _call_desc.arg_0 = x;
  _call_desc.arg_1 = y;
  _call_desc.arg_2 = z;
  _call_desc.arg_3 = r;
  _call_desc.arg_4 = p;
  _call_desc.arg_5 = w;

  _invoke(_call_desc);



}
OpenHRP::_pof_sonyService::~_pof_sonyService() {}


omniObjRef*
OpenHRP::_pof_sonyService::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::OpenHRP::_objref_sonyService(ior, id);
}


::CORBA::Boolean
OpenHRP::_pof_sonyService::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::OpenHRP::sonyService::_PD_repoId) )
    return 1;
  
  return 0;
}

const OpenHRP::_pof_sonyService _the_pof_OpenHRP_msonyService;

OpenHRP::_impl_sonyService::~_impl_sonyService() {}


::CORBA::Boolean
OpenHRP::_impl_sonyService::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "start") ) {

    _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_10000000, "start", 6, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "setObjectV") ) {

    _0RL_cd_457ccd98b3f23528_20000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_30000000, "setObjectV", 11, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "testMove") ) {

    _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_40000000, "testMove", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "stepping") ) {

    _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_50000000, "stepping", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "stop") ) {

    _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_60000000, "stop", 5, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "omniWalkSwitch") ) {

    _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_70000000, "omniWalkSwitch", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "setFootPosR2") ) {

    _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_80000000, "setFootPosR2", 13, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "setFootPosL2") ) {

    _0RL_cd_457ccd98b3f23528_00000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_90000000, "setFootPosL2", 13, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "setFootPosR") ) {

    _0RL_cd_457ccd98b3f23528_20000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_a0000000, "setFootPosR", 12, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "setFootPosL") ) {

    _0RL_cd_457ccd98b3f23528_20000000 _call_desc(_0RL_lcfn_457ccd98b3f23528_b0000000, "setFootPosL", 12, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
OpenHRP::_impl_sonyService::_ptrToInterface(const char* id)
{
  if( id == ::OpenHRP::sonyService::_PD_repoId )
    return (::OpenHRP::_impl_sonyService*) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::OpenHRP::sonyService::_PD_repoId) )
    return (::OpenHRP::_impl_sonyService*) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
OpenHRP::_impl_sonyService::_mostDerivedRepoId()
{
  return ::OpenHRP::sonyService::_PD_repoId;
}

POA_OpenHRP::sonyService::~sonyService() {}

