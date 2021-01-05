#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   // assignment at the moment of creation is NOT assignment opertor 
   // but it is one argument constructor
   String name , lastname;
   cout << "Hello what is your name? ";
   cin >> name;
   cout << "last name? ";
   cin >> lastname;
   name += " ";
   name += lastname;
   cout << "Hello " << name << " welcome" << endl;
   return 0;
}