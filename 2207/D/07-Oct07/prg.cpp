#include <iostream>
using namespace std;
#include "String.h"
using namespace sdds;
int main() {
   String str;
//   String name("Fardad Soleimanloo");
   String name = "Fardad Soleimanloo";
   name.display() << " have written this program" << endl;
   str.set("This is a test");
   str.display() << endl;
   str.set("Another test, but longer");
   str.display() << endl;
   int a(3); // is the same as int a = 3;
   cout << a << endl;
   return 0;
}