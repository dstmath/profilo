// Copyright 2004-present Facebook. All Rights Reserved.
// Generated by: //native/museum/run_codegen.sh
// This is generated code -- do not modify manually.

// @generated SignedSource<<c777b18e41bb8791e650640c86e38ee9>>
// @model md5 4cf5937b2406326b77373720ef21b4d9


#include <museum/8.1.0/art/runtime/base/mutex.h>
#include <museum/8.1.0/art/runtime/intern_table.h>
#include <museum/8.1.0/art/runtime/java_vm_ext.h>
#include <museum/8.1.0/art/runtime/runtime.h>
#include <museum/8.1.0/art/runtime/thread.h>
#include <new>

#include <museum/libs.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION {



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art17ConditionVariable4WaitEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art17ConditionVariable4WaitEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void ConditionVariable::Wait(Thread* p1)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ConditionVariable4WaitEPNS_6ThreadE
      <void
        (ConditionVariable *, Thread*)>()
      (this, p1);
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art17ConditionVariable16WaitHoldingLocksEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art17ConditionVariable16WaitHoldingLocksEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void ConditionVariable::WaitHoldingLocks(Thread* p1)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ConditionVariable16WaitHoldingLocksEPNS_6ThreadE
      <void
        (ConditionVariable *, Thread*)>()
      (this, p1);
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art22IndirectReferenceTable6ResizeEjPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art22IndirectReferenceTable6ResizeEjPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  bool IndirectReferenceTable::Resize(size_t p1, std::string* p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art22IndirectReferenceTable6ResizeEjPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
      <bool
        (IndirectReferenceTable *, size_t, std::string*)>()
      (this, p1, p2);
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art11InternTable25ChangeWeakRootStateLockedENS_2gc13WeakRootStateE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art11InternTable25ChangeWeakRootStateLockedENS_2gc13WeakRootStateE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void InternTable::ChangeWeakRootStateLocked(gc::WeakRootState p1)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11InternTable25ChangeWeakRootStateLockedENS_2gc13WeakRootStateE
      <void
        (InternTable *, gc::WeakRootState)>()
      (this, p1);
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art9JavaVMExt19AllowNewWeakGlobalsEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art9JavaVMExt19AllowNewWeakGlobalsEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void JavaVMExt::AllowNewWeakGlobals()   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JavaVMExt19AllowNewWeakGlobalsEv
      <void
        (JavaVMExt *)>()
      (this);
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art9JavaVMExt26BroadcastForNewWeakGlobalsEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art9JavaVMExt26BroadcastForNewWeakGlobalsEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void JavaVMExt::BroadcastForNewWeakGlobals()   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JavaVMExt26BroadcastForNewWeakGlobalsEv
      <void
        (JavaVMExt *)>()
      (this);
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Locks22jni_weak_globals_lock_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Locks22jni_weak_globals_lock_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef jni_weak_globals_lock_
  #undef jni_weak_globals_lock_
#else
  #error "jni_weak_globals_lock_ is not method-wrapped and will not be proxied correctly"
#endif
  
  Mutex*& Locks::jni_weak_globals_lock_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks22jni_weak_globals_lock_E
      <Mutex*
        >()
      ;
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Locks13mutator_lock_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Locks13mutator_lock_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef mutator_lock_
  #undef mutator_lock_
#else
  #error "mutator_lock_ is not method-wrapped and will not be proxied correctly"
#endif
  
  MutatorMutex*& Locks::mutator_lock_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks13mutator_lock_E
      <MutatorMutex*
        >()
      ;
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Locks26thread_suspend_count_lock_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Locks26thread_suspend_count_lock_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef thread_suspend_count_lock_
  #undef thread_suspend_count_lock_
#else
  #error "thread_suspend_count_lock_ is not method-wrapped and will not be proxied correctly"
#endif
  
  Mutex*& Locks::thread_suspend_count_lock_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks26thread_suspend_count_lock_E
      <Mutex*
        >()
      ;
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Mutex::ExclusiveLock(Thread* p1)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE
      <void
        (Mutex *, Thread*)>()
      (this, p1);
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Mutex::ExclusiveUnlock(Thread* p1)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE
      <void
        (Mutex *, Thread*)>()
      (this, p1);
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art7Runtime9instance_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art7Runtime9instance_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  Runtime*& Runtime::instance_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime9instance_E
      <Runtime*
        >()
      ;
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  bool Runtime::IsShuttingDown(Thread* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE
      <bool
        (Runtime *, Thread*)>()
      (this, p1);
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread15GetFlipFunctionEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread15GetFlipFunctionEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  Closure* Thread::GetFlipFunction()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread15GetFlipFunctionEv
      <Closure*
        (Thread *)>()
      (this);
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread11is_started_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread11is_started_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef is_started_
  #undef is_started_
#else
  #error "is_started_ is not method-wrapped and will not be proxied correctly"
#endif
  
  bool& Thread::is_started_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread11is_started_E
      <bool
        >()
      ;
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread17pthread_key_self_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread17pthread_key_self_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef pthread_key_self_
  #undef pthread_key_self_
#else
  #error "pthread_key_self_ is not method-wrapped and will not be proxied correctly"
#endif
  
  pthread_key_t& Thread::pthread_key_self_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread17pthread_key_self_E
      <pthread_key_t
        >()
      ;
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread25PassActiveSuspendBarriersEPS0_() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread25PassActiveSuspendBarriersEPS0_",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  bool Thread::PassActiveSuspendBarriers(Thread* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread25PassActiveSuspendBarriersEPS0_
      <bool
        (Thread *, Thread*)>()
      (this, p1);
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread21RunCheckpointFunctionEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread21RunCheckpointFunctionEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Thread::RunCheckpointFunction()   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread21RunCheckpointFunctionEv
      <void
        (Thread *)>()
      (this);
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread12resume_cond_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread12resume_cond_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef resume_cond_
  #undef resume_cond_
#else
  #error "resume_cond_ is not method-wrapped and will not be proxied correctly"
#endif
  
  ConditionVariable*& Thread::resume_cond_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread12resume_cond_E
      <ConditionVariable*
        >()
      ;
    
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread18RunEmptyCheckpointEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread18RunEmptyCheckpointEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Thread::RunEmptyCheckpoint()   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread18RunEmptyCheckpointEv
      <void
        (Thread *)>()
      (this);
    
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3artlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_11ThreadStateE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3artlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_11ThreadStateE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  std::ostream& operator<<(std::ostream& p1, ThreadState const& p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3artlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_11ThreadStateE
      <std::ostream&
        (std::ostream&, ThreadState const&)>()
      (p1, p2);
    
  }
} // namespace art::


namespace libart {
  void preinitSymbols() {
    using namespace ::facebook::museum::MUSEUM_VERSION::art;
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ConditionVariable4WaitEPNS_6ThreadE
        <void
          (ConditionVariable *, Thread*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ConditionVariable16WaitHoldingLocksEPNS_6ThreadE
        <void
          (ConditionVariable *, Thread*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art22IndirectReferenceTable6ResizeEjPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
        <bool
          (IndirectReferenceTable *, size_t, std::string*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11InternTable25ChangeWeakRootStateLockedENS_2gc13WeakRootStateE
        <void
          (InternTable *, gc::WeakRootState)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JavaVMExt19AllowNewWeakGlobalsEv
        <void
          (JavaVMExt *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JavaVMExt26BroadcastForNewWeakGlobalsEv
        <void
          (JavaVMExt *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks22jni_weak_globals_lock_E
        <Mutex*
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks13mutator_lock_E
        <MutatorMutex*
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks26thread_suspend_count_lock_E
        <Mutex*
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE
        <void
          (Mutex *, Thread*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE
        <void
          (Mutex *, Thread*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime9instance_E
        <Runtime*
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE
        <bool
          (Runtime *, Thread*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread15GetFlipFunctionEv
        <Closure*
          (Thread *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread11is_started_E
        <bool
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread17pthread_key_self_E
        <pthread_key_t
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread25PassActiveSuspendBarriersEPS0_
        <bool
          (Thread *, Thread*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread21RunCheckpointFunctionEv
        <void
          (Thread *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread12resume_cond_E
        <ConditionVariable*
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread18RunEmptyCheckpointEv
        <void
          (Thread *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3artlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_11ThreadStateE
        <std::ostream&
          (std::ostream&, ThreadState const&)>();
    
    
  }
} // namespace libart

} } } // namespace facebook::museum::MUSEUM_VERSION
