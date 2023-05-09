#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   int i, j;
   for (i = 0; i < 10; i++) {
      for (j = 0; j < 40; j++) {
         putchar('*');
      }
      putchar('\n');
   }

   return 0;
}