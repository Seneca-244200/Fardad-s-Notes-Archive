#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   char str[81];
   cout << "Enter abcdefg<ENTER>" << endl;
   cout << "str: ";
   cin.getline(str, 4, 'f');
   cout << "str: " << str << endl;
   if (cin.fail()) {
      cout << "cin failed!" << endl;
      cin.clear();
      cin.getline(str, 80, '\n');
      cout << "left in keyboard: " << str << endl;
   }
   else { // this will not happen if you entered abcdefg
      cout << "again: ";
      cin.getline(str, 80, '\n');
      cout << "str: " << str << endl;
   }
   return 0;
}