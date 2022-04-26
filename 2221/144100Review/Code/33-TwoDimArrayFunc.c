#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prntInts(const int arr[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   putchar('\n');
}
void prnTable(const int ar[][4], int size) {
   int i;
   for (i = 0; i < size; i++) {
      prntInts(ar[i], 4);
   }
}
int main() {
   int a[3][4] = {
      {10,20,30,40},
      {50,60,70,80},
      {90,100,110,120}
   };
   prnTable(a, 3);
   return 0;
}