
#include <iostream>
using namespace std;
int& foo(int& r) {
   return r;
}
int main() {
   int A = 30;

   foo(A) += 10; // foo(int& r = A);

   cout << A << endl;
   cout << foo(A) << endl;
   cout << ++foo(A) << endl;
   cout << A << endl;

   return 0;
}