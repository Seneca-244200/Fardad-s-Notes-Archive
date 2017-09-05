#include <iostream>
#include "ptr.h"
using namespace std;
void StrCpy(char des[], const char* src) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = '0';
}
int main() {
   char name1[50] = "FRED";
   char name2[50] = "abcdefghijklmnopqrstuvwxyz";
   char* next = &name2[5];
   cout << name1 << endl;
   cout << name2 << endl;
   cout << next << endl;
   StrCpy(name2, name1);
   cout << name1 << endl;
   cout << name2 << endl;
   cout << next << endl;
   cout << int('0') << endl;
   return 0;
}