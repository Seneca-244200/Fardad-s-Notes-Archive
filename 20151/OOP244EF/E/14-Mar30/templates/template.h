#include <cstring>
template <typename Heehaw>
Heehaw add(Heehaw y, Heehaw z){
  Heehaw x = y + z;
  return x;
}

template <typename Type>
Type Max(Type x, Type y){
  return x > y ? x : y;
}

template <>
const char* Max<const char*>(const char* a, const char* b){
  return std::strcmp(a, b) > 0 ? a : b;
}
