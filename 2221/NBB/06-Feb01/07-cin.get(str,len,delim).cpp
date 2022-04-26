#include <iostream>
#include "Mark.h"
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   char str[51];
   char whatIsLeft[51];
   cout << "str> ";
   cin.get(str, 10, ',');
   cout << "str: " << str << endl;
   cin.get(whatIsLeft, 10, '\n');
   cout << "what is left: " << whatIsLeft << endl;
   cin.ignore(10000, '\n');

   return 0;
}

