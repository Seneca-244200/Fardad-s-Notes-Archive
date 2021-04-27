#include <iostream>
using namespace std;
int& foo(int& i) {
   return i;
}
int main() {
   int v1 = 20;
   int v2 = 30;

   foo(v1) += 20;

   cout << v1 << endl;

   foo(v2) = 100;

   cout << v2 << endl;

   return 0;
}

