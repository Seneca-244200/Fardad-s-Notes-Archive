#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
   int a[3][4] = {
      {10,20,30,40},
      {50,60,70,80},
      {90,100,110,120}
   };
   int i, j;
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
         printf("a[%d][%d] = %d\n", i, j, a[i][j]);
      }
   }
   return 0;
}