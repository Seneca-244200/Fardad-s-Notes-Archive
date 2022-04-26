#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   int a=0, b = 10, c = 20;
   printf("a: %d, b: %d\n", a, b);
   a = b++; //after ;
   printf(" a = b++ - > a: %d, b: %d\n", a, b);
   a = ++b; // before ;
   printf(" a = ++b - > a: %d, b: %d\n", a, b);
   a = ++a + b-- + ++c; // don't do crazy stuff like this
   return 0;
}