#include <iostream>
using namespace std;
void foo(int& i) {
   i += 50;
}

int main() {
   int v1 = 30;// initializtion
   int v2;
   v2 = 40;  // setting
   foo(v1);
   cout << v1 << endl;
   foo(v2);
   cout << v2 << endl;
   return 0;
}