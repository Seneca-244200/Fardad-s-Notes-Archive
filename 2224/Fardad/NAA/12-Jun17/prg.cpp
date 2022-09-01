#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "Fardad";
   name[10] = 'X';
   cout << name << endl;
   cout << "*" << name[15] << "*" << endl;
   // Fardad    X
   return 0;
}




