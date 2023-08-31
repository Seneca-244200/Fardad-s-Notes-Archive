#include <iostream>
#include <fstream>
using namespace std;
//int add(int a, int b) {
//   return a + b;
//}
//double add(double a, double b) {
//   return a + b;
//}

template <typename type>
type add(type a, type b) {
   return a + b;
}

int main() {
   int a, b, c;
   double d, e, f;
   a = add(b, c);// add_int_int
   d = add(e, f);// add_double_double
   a = e + f;
   d = b + e;
   return 0;
}