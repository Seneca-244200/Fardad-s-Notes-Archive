
#include <iostream>
#include "Name.h"
#include "utils.h"
using namespace std;
using namespace sdds;


int main() {
   char str[81];
   int limit = 4;
   cout << "Enter abcdefghijk (getline): ";
   cin.getline(str, limit, 'e');
   cout << str << endl;
   if (cin.fail()) {
      cout << "limit " << limit << " reached!" << endl;
      cin.clear();
   }
   cin.getline(str, 81, '\n');
   cout << str << endl;

   return 0;
}