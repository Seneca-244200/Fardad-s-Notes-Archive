#include <iostream>
using namespace std;
void setInttoTen(int& X) {
   X = 10;
}

int main() {
   int i;
   int& R = i;
   R = 20;
   cout << i << endl;
   setInttoTen(i);
   cout << i << endl;

   return 0;
}

//void foo() {
//   int a, b, c;
//   int*  p;
//   a = b * c;
//   a = b * *p;
//
//   a = b & c;
//   a = b && c;
//
//   a = b * &c;
//
//   int&
//
//      R = a;
//
//
//}