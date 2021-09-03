#include <iostream>
#include "Container.h"
using namespace sdds;
using namespace std;
int main() {
   Container C("Milk", 200.0);
   Container D;
   cout << C << endl;
   D = C++;// will not automaticaly do the ++ after!!!!!
   cout << "D = C++ and the result is " << D << endl;
   cout << C << endl;
   cout << "C is a Container of " << (const char*)C 
      << " which contains "<< (double)C << " CCs." << endl;
   cout << "The contents name are are spelled like this: ";
   // Challenge:
   // I did not overload the index operator, so how come this works?
   // this will be in your midterm test!
   for (int i = 0; C[i] != '\0'; i++) {
      cout << C[i] << " ";
   }
   cout << endl;
   return 0;
}