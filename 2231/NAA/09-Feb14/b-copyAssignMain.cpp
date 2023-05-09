#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;


int main() {
   String name = "Jack", name2 = "John";
   cout << "Name: ";
   cin >> name;
   cout << "Hello " << name << "!" << endl;
   name = name;
   name2 = name;
   cout << "Hello to " << name2 << " too!" << endl;
   return 0;
}