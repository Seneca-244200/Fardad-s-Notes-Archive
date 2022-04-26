#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   int a;
   a = -20; // never happens
   while (a > 0) {
     printf("%d ", a--);
   }
   putchar('\n');

   a = -20;
   do {  // happens at least once
      printf("%d ", a--);
   } while (a > 0);
   putchar('\n');

   return 0;
}