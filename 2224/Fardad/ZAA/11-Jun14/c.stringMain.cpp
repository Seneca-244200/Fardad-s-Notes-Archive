#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void sayHello(String S) {
   cout << "Hello " << S << endl;
}
int main() {
   String hello = "Hello";// call to one arg constructor
   String str = hello;

   String& ref = str;
   
   cout << hello << endl;
   cout << "Enter your name: ";
   cin >> str;
   sayHello(str);
   hello = str;
   cout << "Hello again " << hello << endl;

   ref = str; // will be ingored since they are both the same!

   cout << "Goodbye: " << ref << endl;

   return 0;
}
