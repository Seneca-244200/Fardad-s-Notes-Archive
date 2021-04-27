#include <iostream>
using namespace std;
void foo(int i) {
   cout << i << endl;
}

int main() {
   int v1 = 30;// initializtion
   
   int v2;
   v2 = 40;  // setting

   foo(v1);

   foo(v2);

   foo(60);


   return 0;
}