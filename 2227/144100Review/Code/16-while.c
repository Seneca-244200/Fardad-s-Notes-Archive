#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   //while (cond) {
   //   do something;
   //}

   int a = 20;
   while (a > 0) {
      printf("%d ", a--);
   }
   putchar('\n');

   a = 20;
   while (a) {
      printf("%d ", a--);
   }
   putchar('\n');

   a = -20;
   while (a > 0) { // this will not happen
      printf("%d ", a--);
   }
   putchar('\n');

   return 0;
}