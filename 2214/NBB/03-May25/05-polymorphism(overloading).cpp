#include <iostream>
using namespace std;
void line(char CharToFillTheLineWith, int length);  // line_char_int
void line(char CherToFillTheLineWith);     // line_char
void line(); // line
int main() {
   line('*', 30);
   line('=');
   line();
   return 0;
}
void line() {
   line('-', 75);
}
void line(char fill) {
   line(fill, 60);
}
void line(char fill, int len) {
   int i;
   for (i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}