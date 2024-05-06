#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void foo(int ar[]) {
   for (int i = 0; i < 3; i++) {
      ar[i] = 100 + i;
   }
}
void prnAr(const int ar[], int size) {
   for (int i = 0; i < size; i++) {
      printf("%d ", ar[i]);
   }
   putchar('\n');
}
int main() {
   int var[5] = { 1000, 2000, 3000, 4000, 5000 };
   int* ptr;
   ptr = var;
   *ptr = 2345;
   prnAr(var, 5);
   printf("var: %d\n", var[0]);
   printf("TargetOf ptr: %d\n", *ptr);
   printf("TargetOf ptr: %d\n", ptr[0]);
   printf("ptr: %u\n", ptr);
   var[3] = 345;
   printf("var[3]: %d\n", ptr[3]);
   prnAr(var, 5);
   foo(var);
   prnAr(var, 5);
   return 0;
}