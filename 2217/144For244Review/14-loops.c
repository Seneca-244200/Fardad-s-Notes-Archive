#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {
   int cond ;
   // action may never happen
   while (cond) {
      //action
      if (something) {
         cond = 0;
      }
   }

   //action will happen at least once
   do {
      // action;
   } while (cond);

   int a;

   a = 5; // do something before the loop
   while (cond) { // check condition
      // action;
      if (something) {
         cond = whatver;
      }
      a = a + 5; // do something at the end of each loop
   }

   for (a = 5; cond; a = a + 5) {
      // action;
      if (something) {
         cond = whatver;
      }
   }

   for (i = 0; i < 50; i++) {

   }

   return 0;
}