#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   int length;
   char str[100];
   String name = "Homer Simpson";
   cout << name.length() << endl;
   cout << int(name) << endl;
   length = name;
   strcpy(str, name);
   cout << str << endl;
   return 0;
}