#include <iostream>
using namespace std;
int something = 123;
int foo() {
   int value = 10;
}

int main() {
   bool cond;
   cond = true;
   cout << cond << endl;
   cond = false;
   cout << cond << endl;
   cond = 2.34;
   cout << cond << endl;
   int a = 10 > 20;
   cout << a << endl;
    a = 10 < 20;
   cout << a << endl;
   if (cond) {
      int a = 10;
      cout << a << endl;
   }
   return 0;
}