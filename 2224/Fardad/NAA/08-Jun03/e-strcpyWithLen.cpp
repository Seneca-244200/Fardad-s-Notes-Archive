#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   char str[50]  = "abcdefghijklmnop";
   char s[50];
   U.strcpy(s, str);
   cout << s << endl;
   U.strcpy(s, str, 9);
   cout << s << endl;
   return 0;
}