#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   char str[81];
   cout << "str: ";
   cin.getline(str, 80, 'd');
   cout << "*" << str << "*" << endl;
   cin.getline(str, 80, '\n');
   cout << "*" << str << "*" << endl;
   return 0;
}