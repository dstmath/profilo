/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef BIONIC_SYSTRACE_H
#define BIONIC_SYSTRACE_H
#define _BIONIC_SYSTRACE_H
#define _BIONIC_SYSTRACE_H_
#define BIONIC_SYSTRACE_H_

#include "bionic_macros.h"

// Tracing class for bionic. To begin a trace at a specified point:
//   ScopedTrace("Trace message");
// The trace will end when the contructor goes out of scope.

class __LIBC_HIDDEN__ ScopedTrace {
 public:
  explicit ScopedTrace(const char* message);
  ~ScopedTrace();

 private:
  DISALLOW_COPY_AND_ASSIGN(ScopedTrace);
};

#endif
