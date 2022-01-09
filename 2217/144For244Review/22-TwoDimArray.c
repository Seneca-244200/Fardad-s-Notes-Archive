#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void prnAr5(int afive[][5], int size) {
   int i, j;
   for (i = 0; i < size; i++) {
      for (j = 0; j < 5; j++) {
         printf("%d ", afive[i][j]);
      }
      printf("\n");
   }
}
void readafive(int afive[][5], int size) {
   int i, j;
   for (i = 0; i < size; i++) {
      for (j = 0; j < 5; j++) {
         printf("element %d-%d: ", i + 1, j + 1);
         scanf("%d", &afive[i][j]);
      }
   }
}
int main() {
   int a[3][5] = {  // a[1][3]  (1x5+3)
      {1,2,3,4,5},
      {6,7,8,9,10},
      {11,12,13,14,15}
   };
   int b[4][5] = {  
      {1,2,3,4,5},
      {6,7,8,9,10},
      {11,12,13,14,15},
      {16,17,18,19,20}
   };
   int* ptr = (int*)a;
   int i;
   prnAr5(a, 3);
   prnAr5(b, 4);
   for (i = 0; i < 15; i++) {
      printf("%d ", ptr[i]);
   }
   printf("\n");
   readafive(a, 3);
   prnAr5(a, 3);
   return 0;
}