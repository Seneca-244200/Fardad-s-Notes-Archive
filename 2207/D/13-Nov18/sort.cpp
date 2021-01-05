#include "sortfunc.h"
void swap(double* a, double* b) {
   double temp = *a;
   *a = *b;
   *b = temp;
}

void sort(double a[], int size, bool ascending) {
   int i;
   int j;
   for (i = 0; i < (size - 1); i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (ascending) {
            if (a[j] > a[j + 1]) {
               swap(&a[j], &a[j + 1]);
            }
         }
         else {
            if (a[j] < a[j + 1]) {
               swap(&a[j], &a[j + 1]);
            }
         }
      }
   }
}


