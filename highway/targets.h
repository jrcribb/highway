// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef HIGHWAY_TARGETS_H_
#define HIGHWAY_TARGETS_H_

// Unconditionally defines target types for specializing and calling functors
// (no harm defining them if they are not used).

namespace jxl {

// SIMD_TARGET expands to one of these. Using structs instead of target_bits.h
// values makes it easier to infer the target from a mangled name.
struct NONE {};
struct SSE4 {};
struct AVX2 {};
struct AVX512 {};
struct PPC8 {};
struct ARM8 {};

}  // namespace jxl

#endif  // HIGHWAY_TARGETS_H_
