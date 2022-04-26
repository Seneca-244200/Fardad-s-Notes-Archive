#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int num;
   char str[81];
   cout << "Enter abcde" << endl << ">";
   cin.get(str, 10, '\n');
   cout << "str: *" << str << "*" << endl;
   cout << "Enter fghijklmnopqrstuvwxyz" << endl << ">";
   cin.get(str, 10, '\n');
   cout << "str: *" << str << "*" << endl;

   return 0;
}