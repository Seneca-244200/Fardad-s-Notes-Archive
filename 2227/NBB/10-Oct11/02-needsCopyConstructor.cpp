#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
void sayHello(Name N) {
   cout << "Hello ";
   N.display() << endl;
}
int main() {
   Name n = "Fred Soley"; // assign at creation is one arg constructor
   sayHello(n);  // sayHello(Name N=n)
   cout << "Goodbye ";  
   n.display() << endl;
   return 0;
}