#include <iostream>
using namespace std;

int main() {
   // int& R; // compile error since references must be initialized.
   //int* p = (int*)95;
   int val = 20;
   int& v = val;
   cout << v << endl;
   v = 30;
   cout << val << endl;

   cout << unsigned(&v) << " " << unsigned(&val) << endl;
   cout << &v << " " << &val << endl;
   cout << v << " " << val << endl;
  // cout << p << endl;

   return 0;
}