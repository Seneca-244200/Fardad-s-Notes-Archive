#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {
   int a = 10;
   int b;

   b = a++;
   /*
   b = a;
   a = a + 1;
   */
   printf("a: %d\n", a);
   printf("b: %d\n", b);
   b = ++a;
   /*
   a = a + 1;
   b = a;
   */
   printf("a: %d\n", a);
   printf("b: %d\n", b);
   return 0;
}