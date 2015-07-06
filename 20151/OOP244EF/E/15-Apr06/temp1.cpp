#include <iostream>
using namespace std;

template <typename T>
void swap(T* a, T* b){
  T temp = *a;
  *a = *b;
  *b = temp;
}

template <typename T>
T add(T a, T b){
  return a + b;
}

template <>
void swap<char*>(char* a, char* b){
  char* temp = new char[strlen(a) + 1];
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
  delete[] temp;
}

int main(){
  int a = 5, b = 10;
  double x = 123.24, y = 4356.34;
  char n[20] = "abcd";
  char m[20] = "xyz";
  swap(&a, &b);
  swap(&x, &y);
  cout << a << " " << b << endl;
  swap(n, m);
  return 0;
}
