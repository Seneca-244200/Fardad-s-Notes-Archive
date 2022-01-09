#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   char a[50];
   char b[40] = "Fred Soley";
   cout << "length: " << Utils::strLen(b) << endl;
   Utils::strCpy(a, b);
   cout << "Name: " << b << endl;
   return 0;
}