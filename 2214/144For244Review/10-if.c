#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {
   // take action based on condition
   if (cond) {
      // true
   }


   // toke one of two actions based on a condition
   if (cond) {
      // true
   }
   else {
      /// false;
   }

   // if one action or non based on many condition 
   if (c1) {
      // action 1
   }
   else if (c2) {
      // action 2
   }
   ......
   else if (cn) {
      // action n
   }


   // if one action or else based on many condition 
   if (c1) {
      // action 1
   }
   else if (c2) {
      // action 2
   }
   ......
   else if (cn) {
      // action n
   }
   else{
      // of non of the above
   }

   return 0;
}