#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int num;
   char str[81];
   cout << "Enter num 123: ";
   cin.ignore(2);
   num = getint();
   cout << "num: " << num << endl;
   getint(num, "Enter num 123: ");
   cout << "num: " << num << endl;
   cout << "Enter abcdefghijklmnopqrstuvwxyz: ";
   cin.ignore(2);// ignore 2 characters
   cin >> str;
   cout << "str: " << str << endl;
   return 0;
}