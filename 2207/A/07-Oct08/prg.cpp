#include <iostream>
using namespace std;
#include "String.h"
using namespace sdds;
int main() {
   String str;
  // String name("Fardad Soleimanloo");
   String name = "Fardad Soleimanloo"; // init is a call to a single argument constructor
   name.display() << " is writting this code!" << endl;
   str.set("This is a test");
   str.display() << endl;
   str.set("Another test, but longer");
   str.display() << endl;
   
   //int a = 5; // init is a call to a single arg constructor.
   int a(5); 

   cout << a << endl;

   return 0;
}