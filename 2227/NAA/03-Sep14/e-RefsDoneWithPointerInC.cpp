#include <iostream>
using namespace std;
int& foo(int& R) {
   return R;
}

int* foo(int* p) {
   return p;
}

int main() {
   int A = 30;
   int B = 30;
   foo(A) += 10;
   *foo(&B) += 10;


   //30 += 20;

   cout << A << endl;
   cout << B << endl;
   cout << foo(A) << endl;
   cout << *foo(&B) << endl;
   cout << ++foo(A) << endl;
   cout << ++(*foo(&B)) << endl;
   cout << A << endl;
   cout << B << endl;

   return 0;
}