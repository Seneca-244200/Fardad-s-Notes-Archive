#include <iostream>
using namespace std;
void foo(int i) {
   cout << i << endl;
}

int main() {
   int v1 = 30; // v1 in initialzed to 30
   
   int v2;

   v2 = 40;   // v2 is set to 40

   foo(v1);  // void foo(int i = v1) when called
   foo(v2);  // void foo(int i = v2) when called
   foo(60);  // void foo(int i = 60) when called
   return 0;
}

