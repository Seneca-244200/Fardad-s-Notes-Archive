
#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int num;
   char str[81];
   cout << "Enter abcde" << endl << ">";
   cin.getline(str, 10, '\n');// stop at delimiter and eats it
   cout << "str: *" << str << "*" << endl;
   cout << "Enter fghijklmnopqrstuvwxyz" << endl << ">";
   cin.get(str, 10, '\n');  // does ingore lead whitespace
   cout << "str: *" << str << "*" << endl;

   return 0;
}