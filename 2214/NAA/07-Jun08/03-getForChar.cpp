#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   char ch;
   char str[81];
   cout << "ch: ";
   ch = cin.get();
   cout << "*" << ch <<"*" << endl;
   cin.ignore(1000, '\n');
   cout << "ch: ";
   cin.get(ch);
   cout << "*" << ch << "*" << endl;
   return 0;
}