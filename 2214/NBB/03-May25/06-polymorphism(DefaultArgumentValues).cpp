#include <iostream>
using namespace std;
void line(char CharToFillTheLineWith, int length = 60);
void line();
int main() {
   line('*', 30);
   line('=');
   line('+');
 //  line(,75); // cannot do
   line();
   return 0;
}
void line() {
   line('-', 79);
}
void line(char fill, int len) {
   int i;
   for (i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}