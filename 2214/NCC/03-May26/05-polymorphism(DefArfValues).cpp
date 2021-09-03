#include <iostream>
using namespace std;

void line(char CharTofillTheLine='-', int length=60);  

int main(){
   line('*', 30);
   line('+');
   line();
   //line(, 70); incorrect

   return 0;
}


void line(char fill, int len) {
   int i;
   for (i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}