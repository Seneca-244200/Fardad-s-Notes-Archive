

#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   // assignment at the moment of creation is 
   // initialization that is one argument constructor
   String S = "Hello!";
   cout << "Enter your name: ";
   cin >> S;
   cout << "Hello " << S << endl;

   return 0;
}







