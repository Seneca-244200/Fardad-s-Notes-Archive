#include <iostream>
using namespace std;
int& foo(int& i) {
   return i;
}

int main() {
   int v1 = 30;// initializtion
   int v2;
   v2 = 40;  // setting
   foo(v1) += 200;
   cout << v1 << endl;
   foo(v2) = 900;
   cout << v2 << endl;
   return 0;
}