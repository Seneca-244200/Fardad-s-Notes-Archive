#include <iostream>
using namespace std;

void foo(int x) {
   cout << x << endl;
}

int main() {
   int a = 10; //initialization
   int b; // garbage
   b = 10;  // assigned

   foo(a); //4: foo(int x = a){ // al the agruments are always initizalized
   foo(20);//4: foo(int x = 20){ // by the objects that are passed to them

   return 0;
}