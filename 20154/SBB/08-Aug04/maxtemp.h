#ifndef __244_MAXTEMP_H__
#define __244_MAXTEMP_H__
#include <cstring>
template <typename heehaw>
heehaw max(heehaw a, heehaw b){
  return a > b ? a : b;
}

template <>
const char* max<const char*>(const char* a, const char *b){
  return std::strcmp(a, b) > 0 ? a : b;
}

#endif