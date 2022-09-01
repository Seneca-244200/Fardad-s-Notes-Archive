#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String str = "Homer";
   for(int i = 0; i < 20; i++) {
      cout << str[i] << endl;
   }
   str[3] = 'z';
   cout << str << endl;
   return 0;
}