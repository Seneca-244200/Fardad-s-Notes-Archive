#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   int done = 0; // false
   while (!done) {
      switch (selectioOption()) {
      case 1:   // read 
         break;
      case 2:
         if (something) done = 1;
         break;
      default:
         //whatever
      }
   }

   return 0;
}