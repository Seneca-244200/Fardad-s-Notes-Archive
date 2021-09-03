#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;


int main() {
   char ch;
   char str[80];
   cin >> ch;
   cin.ignore(2);
   // cin.ignore(MaxHowMany, char(UpToAndIncluding));
   cin >> str;
   cout << ch << str << endl;
   return 0;
}