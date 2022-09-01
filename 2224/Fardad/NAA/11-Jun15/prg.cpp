#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void sayHello(String copy) {
   cout << "Hello " << copy << endl;
}
int main() {
   // assignment at the moment of creation is 
   // initialization that is one argument constructor
   String S = "Hello!";
   String& name = S;
   cout << "Enter your name: ";
   cin >> S;
   name = S;
   cout << name << " and " << S << " have the same data!" << endl;

   return 0;
}




