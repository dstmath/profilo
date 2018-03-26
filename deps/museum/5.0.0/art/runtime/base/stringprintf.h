/*
 * Copyright (C) 2011 The Android Open Source Project
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

#ifndef ART_RUNTIME_BASE_STRINGPRINTF_H_
#define ART_RUNTIME_BASE_STRINGPRINTF_H_

#include <stdarg.h>
#include <museum/5.0.0/external/libcxx/string>

namespace facebook { namespace museum { namespace MUSEUM_VERSION { namespace art {

// Returns a string corresponding to printf-like formatting of the arguments.
std::string StringPrintf(const char* fmt, ...)
        __attribute__((__format__(__printf__, 1, 2)));

// Appends a printf-like formatting of the arguments to 'dst'.
void StringAppendF(std::string* dst, const char* fmt, ...)
        __attribute__((__format__(__printf__, 2, 3)));

// Appends a printf-like formatting of the arguments to 'dst'.
void StringAppendV(std::string* dst, const char* format, va_list ap);

} } } } // namespace facebook::museum::MUSEUM_VERSION::art

#endif  // ART_RUNTIME_BASE_STRINGPRINTF_H_
