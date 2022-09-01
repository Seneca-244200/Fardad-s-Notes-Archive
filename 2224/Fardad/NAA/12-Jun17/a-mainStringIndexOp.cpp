#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void sayHello(String copy) {
   cout << "Hello " << copy << endl;
}
void displayString(const String& str) {
   for(int i = 0; i < 20; i++) {
      cout << str[i] ;
   }
   cout << endl;
}
void displayStringNoRef(String str) {
   for(int i = 0; i < 20; i++) {
      cout << str[i];
   }
   cout << endl;
}

int main() {
   // assignment at the moment of creation is 
   // initialization that is one argument constructor
   String S = "Hello!";
   displayString(S);
   S[0] = 'A';
   S[30] = 'X';
   displayStringNoRef(S);
   return 0;
}




