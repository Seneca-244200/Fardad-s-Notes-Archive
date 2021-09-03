#include <iostream>
using namespace std;
void line(char CharTofillTheLine, int length);// sign lineCharInt
void line(char CharTofillTheLine);         // sign lineChar
void line();
// sign line
int main() {
   line('*', 40);
   line('-');
   line();
   return 0;
}

void line() {
   line('=', 75);
}
void line(char fill) {
   line(fill, 70);
}
void line(char fill, int len) {
   int i;
   for (i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}