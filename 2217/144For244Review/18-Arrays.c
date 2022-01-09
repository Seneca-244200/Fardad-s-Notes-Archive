#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void changeArray(int ar[]) {
void changeArray(int* ar) {
      int i;
   for (i = 0; i < 9; i++) {
      ar[i] = (i + 1) * 100;
   }
}
void prnArray(const int ar[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", ar[i]);
   }
   printf("\n");
}
void getName(char* name) {
   printf("Enter you name: ");
   scanf("%s", name);
}
int main() {
   char theName[50];
   int a[9] = { 10,20,30,40,50,60,70,80,90 };
   int* ptr = a;
   getName(theName);
   prnArray(ptr, 9);
   prnArray(a, 9);
   changeArray(a);
   prnArray(a, 9);
   return 0;
}