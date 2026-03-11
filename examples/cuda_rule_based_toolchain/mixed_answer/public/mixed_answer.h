// Copyright 2026 The Bazel Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MIXED_ANSWER_PUBLIC_MIXED_ANSWER_H_
#define MIXED_ANSWER_PUBLIC_MIXED_ANSWER_H_

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

int cpp_answer(void);
int cuda_answer(void);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif  // MIXED_ANSWER_PUBLIC_MIXED_ANSWER_H_
