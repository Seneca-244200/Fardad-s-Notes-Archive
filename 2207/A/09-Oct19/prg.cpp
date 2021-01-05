#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   // assignment at the moment of creation is a call to one argument constructor
   String name;// this is not an assignment operator
   cout << "Hello what is your name? ";
   cin >> name;
   cout << "Hello " << name << endl;
   return 0;
}