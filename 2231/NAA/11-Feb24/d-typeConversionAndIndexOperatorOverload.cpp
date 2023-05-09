#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   char cstrName[50];
   String name = "homer";
   name[0] = 'H';
   cout << name << endl;
   name[6] = 'J';
   name[7] = '.';
   cout << name << endl;
   strcpy(cstrName, name);
   cout << cstrName << endl;
   return 0;
}