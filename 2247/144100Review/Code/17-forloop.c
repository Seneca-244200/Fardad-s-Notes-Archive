#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   //while (cond) {
   //   do something;
   //}

   int a;
   
   a = 20;
   while (a > 0) {
      /*printf("%d ", a--);*/
     
      printf("%d ", a);
      a -= 1;
   }
   putchar('\n');

   for (a = 20; a > 0; a -= 1) {
      printf("%d ", a);
   }
   putchar('\n');


   a = 20;
   while (a > 0) {
     printf("%d ", a--);
   }
   putchar('\n');

   for (a = 20; a > 0;printf("%d ", a--));

   putchar('\n');
   return 0;
}