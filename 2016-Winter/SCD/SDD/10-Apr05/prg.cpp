template <typename type>
type getMax(type a, type b){
  return a > b ? a : b;
}

template<>
char* getMax(char* a, char* b){
  return strcmp(a, b) > 0 ? a : b;
}

int main(){
  char n[] = "Fardad";
  char m[] = "Fardood";
  char* s;
  int a = 5;
  int b = 10;
  int c = getMax(a, b);
  s = getMax(n, m);
  return 0;
}