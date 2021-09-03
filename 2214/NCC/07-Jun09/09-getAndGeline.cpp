
#include <iostream>
#include "Name.h"
#include "utils.h"
using namespace std;
using namespace sdds;


int main() {
   char str[81];

   cout << "Enter abcdefghijk, (getline): ";
   cin.getline(str, 81, 'd');
   cout << str << endl;
   cin.getline(str, 81, '\n');
   cout << str << endl;
   cout << "Enter abcdefghijk, (get): ";
   cin.get(str, 81, 'd');
   cout << str << endl;
   cin.getline(str, 81, '\n');
   cout << str << endl;
   return 0;
}