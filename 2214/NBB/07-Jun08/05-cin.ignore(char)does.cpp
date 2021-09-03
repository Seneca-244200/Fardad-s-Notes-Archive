#include <iostream>
#include "Student.h"
using namespace sdds;
using namespace std;


int main() {
   char a, b;
   char str[81];
   cout << int('\n') << endl;
   cout << "Enter the following: abcdefghijklmnopqrst" << endl << "> ";
   cin >> a;
   cin.ignore('\n');
   cin >> b;
   cout << a << b << endl;
   cin >> str;
   cout << str << " are in left in keyboard" << endl;
   return 0;
}