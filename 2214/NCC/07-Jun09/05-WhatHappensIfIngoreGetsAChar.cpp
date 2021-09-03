
#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;


int main() {
   char a;
   char str[80];
   cin >> a;
   cin.ignore('\n'); // ignore 10 chars
   cin >> str;
   cout << a << str << endl;
   return 0;
}