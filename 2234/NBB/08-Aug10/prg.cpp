#include <iostream>
#include <fstream>
using namespace std;
// add_int_int
int add(int a, int b) {
   return a + b;
}
// add_float_float
float add(float a, float b) {
   return a + b;
}

template <typename type>
type add(type a, type b) {
   return a + b;
}


int main() {
   int a, i = 10;
   double b = 2.4;
   a = b;
   a = 10;

   a = add(i , 3);

   return 0;
}