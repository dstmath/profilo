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

#ifndef ART_RUNTIME_GC_COLLECTOR_IMMUNE_REGION_H_
#define ART_RUNTIME_GC_COLLECTOR_IMMUNE_REGION_H_

#include <museum/7.1.2/art/runtime/base/macros.h>
#include <museum/7.1.2/art/runtime/base/mutex.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION { namespace art {
namespace mirror {
class Object;
}  // namespace mirror
namespace gc {
namespace space {
class ContinuousSpace;
}  // namespace space

namespace collector {

// An immune region is a continuous region of memory for which all objects contained are assumed to
// be marked. This is used as an optimization in the GC to avoid needing to test the mark bitmap of
// the zygote, image spaces, and sometimes non moving spaces. Doing the ContainsObject check is
// faster than doing a bitmap read. There is no support for discontinuous spaces and you need to be
// careful that your immune region doesn't contain any large objects.
class ImmuneRegion {
 public:
  ImmuneRegion();

  void Reset();

  // Returns true if an object is inside of the immune region (assumed to be marked).
  ALWAYS_INLINE bool ContainsObject(const mirror::Object* obj) const {
    // Note: Relies on integer underflow behavior.
    return reinterpret_cast<uintptr_t>(obj) - reinterpret_cast<uintptr_t>(begin_) < size_;
  }

  void SetBegin(mirror::Object* begin) {
    begin_ = begin;
    UpdateSize();
  }

  void SetEnd(mirror::Object* end) {
    end_ = end;
    UpdateSize();
  }

  mirror::Object* Begin() const {
    return begin_;
  }

  mirror::Object* End() const {
    return end_;
  }

  size_t Size() const {
    return size_;
  }

 private:
  void UpdateSize() {
    size_ = reinterpret_cast<uintptr_t>(end_) - reinterpret_cast<uintptr_t>(begin_);
  }

  mirror::Object* begin_;
  mirror::Object* end_;
  uintptr_t size_;
};

}  // namespace collector
}  // namespace gc
} } } } // namespace facebook::museum::MUSEUM_VERSION::art

#endif  // ART_RUNTIME_GC_COLLECTOR_IMMUNE_REGION_H_
