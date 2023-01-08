#include <iostream>
using namespace std;
int& foo(int& R) {
   return R;
}


int main() {
   int A = 30;

   foo(A) += 10;

   cout << A << endl;
   cout << foo(A) << endl;
   cout << ++foo(A) << endl;
   cout << A << endl;

   return 0;
}