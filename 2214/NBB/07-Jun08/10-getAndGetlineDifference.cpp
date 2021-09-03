#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   char str[81];
   cout << "str: ";
   cin.get(str, 80, 'd');
   cout << "get(str, 80, 'd'): *" << str << "*" << endl;
   cin.get(str, 80, '\n');
   cout << "get(str, 80, '\\n'): *" << str << "*" << endl;
   cin.ignore(1000, '\n');
   cout << "str: ";
   cin.getline(str, 80, 'd');
   cout << "getline(str, 80, 'd'): *" << str << "*" << endl;
   cin.getline(str, 80, '\n');
   cout << "getline (str, 80, '\\n'): *" << str << "*" << endl;
   return 0;
}