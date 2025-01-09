#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   int a, b = 10, c = 20;
   a = b && c;
   printf("b && c: %d", a);
   a = b += c;
   printf("b += c: %d", a);
   a = b = c;
   printf("b = c: %d", a);
   a = b = c;
   return 0;
}