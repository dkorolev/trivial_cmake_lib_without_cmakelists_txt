#include "trivial_cmake_lib_without_cmakelists_txt.h"

#ifndef TRIVIAL_CMAKE_LIB_WITHOUT_CMAKE_LISTS_TXT_ADD_TO_SUM
int trivial_cmake_lib_without_cmakelists_txt_add(int a, int b) {
  return a + b;
}
#else
int trivial_cmake_lib_without_cmakelists_txt_add(int a, int b) {
  return a + b + TRIVIAL_CMAKE_LIB_WITHOUT_CMAKE_LISTS_TXT_ADD_TO_SUM;
}
#endif  // TRIVIAL_CMAKE_LIB_WITHOUT_CMAKE_LISTS_TXT_ADD_TO_SUM
