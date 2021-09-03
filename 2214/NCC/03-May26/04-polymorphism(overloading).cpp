#include <iostream>
using namespace std;

void line(char CharTofillTheLine, int length);  // line_char_int
void line(char CharTofillTheLine);              // line_char
void line();

int main(){
   line('*', 30);
   line('+');
   line();
   return 0;
}

void line() {
   line('-', 79);
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