#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int num;
   char str10long[10];
   char str[81];
   cout << "Enter abcdefghijklmnopqrstuvwxyz: ";
   cin.get(str10long, 10, '\n');
   cout << "str: " << str10long << endl;
   cin >> str;
   cout << "str: " << str << endl;

   return 0;
}