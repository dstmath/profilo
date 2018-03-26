// Copyright 2004-present Facebook. All Rights Reserved.
// Generated by: //native/museum/run_codegen.sh
// This is generated code -- do not modify manually.

// @generated SignedSource<<43e44c260283c77902d8c555b323bc4a>>
// @model md5 050a75aa376e1b119f0b84463c86e9bd


#include <museum/5.0.0/bionic/libc/locale.h>

#include <museum/libs.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION {



namespace libc { namespace lookups {
  template<typename T>
  T* lookup__uselocale() {
    static auto const symbol = ::facebook::libc().get_symbol<T>({
      "uselocale",
    });
    return symbol;
  }
} } // namespace libc::lookups
extern "C" { 

  
  locale_t uselocale(locale_t p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libc::lookups::lookup__uselocale
      <locale_t
        (locale_t)>()
      (p1);
  }
 } // extern "C"


namespace libc { namespace lookups {
  template<typename T>
  T* lookup__isdigit_l() {
    static auto const symbol = ::facebook::libc().get_symbol<T>({
      "isdigit_l",
    });
    return symbol;
  }
} } // namespace libc::lookups
extern "C" { 

  
  int isdigit_l(int p1, locale_t p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libc::lookups::lookup__isdigit_l
      <int
        (int, locale_t)>()
      (p1, p2);
  }
 } // extern "C"


namespace libc { namespace lookups {
  template<typename T>
  T* lookup__isxdigit_l() {
    static auto const symbol = ::facebook::libc().get_symbol<T>({
      "isxdigit_l",
    });
    return symbol;
  }
} } // namespace libc::lookups
extern "C" { 

  
  int isxdigit_l(int p1, locale_t p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libc::lookups::lookup__isxdigit_l
      <int
        (int, locale_t)>()
      (p1, p2);
  }
 } // extern "C"


namespace libc {
  void preinitSymbols() {
    
    
      ::facebook::museum::MUSEUM_VERSION::libc::lookups::lookup__uselocale
        <locale_t
          (locale_t)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libc::lookups::lookup__isdigit_l
        <int
          (int, locale_t)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libc::lookups::lookup__isxdigit_l
        <int
          (int, locale_t)>();
    
  }
} // namespace libc

} } } // namespace facebook::museum::MUSEUM_VERSION
