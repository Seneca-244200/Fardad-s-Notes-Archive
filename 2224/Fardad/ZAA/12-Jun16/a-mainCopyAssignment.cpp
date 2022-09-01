#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Fardad";// call to one arg constructor
   name = "jack"; // if operator=(const char* str) does not exist, "jack" will be casted to a temp String using the constructor
   cout << name << endl;
   return 0;
}
