#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pointers.h"

void setTo1000(int * ptr) {
   * ptr = 1000;
}

void readInt(int * ptr) {
   printf("Enter an integer: ");
   scanf("%d", ptr);
}

int main() {
   int a = 10;
   int * p;
   p = & a;
   * p = 123456;
   printf("%d\n", a);
   setTo1000(& a);
   printf("%d\n", a);
   readInt(& a);
   printf("you enterd: %d\n", a);
   return 0;
}