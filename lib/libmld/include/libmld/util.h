/*
Author: Humberto Munoz Bauza (humberto.munozbauza@nasa.gov)

Copyright © 2023, United States Government, as represented by the Administrator
of the National Aeronautics and Space Administration. All rights reserved.

The PySA, a powerful tool for solving optimization problems is licensed under
the Apache License, Version 2.0 (the "License"); you may not use this file
except in compliance with the License. You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0.

Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License.
*/

#ifndef LIBMLD_UTIL_H
#define LIBMLD_UTIL_H
#include <cstdint>

#if defined(__cplusplus) && (__cplusplus >= 202002L)
#include <bit>
#else
#include <bitset>
#endif

template <typename T> size_t _popcount(T x) {
#if defined(__cplusplus) && (__cplusplus >= 202002L)
  return std::popcount(x);
#else
  return std::bitset<64>(x).count();
#endif
};

#endif // LIBMLD_UTIL_H
