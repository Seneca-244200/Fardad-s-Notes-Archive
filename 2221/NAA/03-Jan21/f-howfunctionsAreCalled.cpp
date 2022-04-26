
#include <iostream>
using namespace std;

int foo(int a, int b) {
   return (a +b) * 10;
}



int main() {
   int x =25;
   cout << foo(x, 30) << endl;   // call will be done as foo(int a = x, int b = 30);

   cout << foo(1, 6) << endl;   // call will be doen as foo(int a = 1, int b = 6);

   return 0;
}