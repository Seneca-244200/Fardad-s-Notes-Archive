template <typename Heehaw>
Heehaw add(Heehaw a, Heehaw b){
  Heehaw x = a + b;
  return x;
}

template <typename Type>
Type Max(Type a, Type b){
  return a > b ? a : b;
}

template <>
const char* Max<const char*>(const char* a, const char* b){
  return strcmp(a, b) > 0 ? a : b;
}