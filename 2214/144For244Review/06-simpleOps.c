#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {
   int a;
   int b = 12;
   int c;
   a = b + 4;
   printf("%d\n", a);
   a = a + 10;
   printf("%d\n", a);
   a = b < 10;
   printf("%d\n", a);
   a = b > 10;
   printf("%d\n", a);
   c = a = b + 20;
   /* sequence of operation.
   c = a = 32;
   c = 32;
   c will be 32;
   */
   printf("%d\n", a);
   printf("%d\n", c);
   a = !!b;
   /* sequence of operation.
   * a = !!12;
   * a = !0;
   * a = 1;
   */

   printf("%d\n", a);
   if (b) {
      printf("b is true\n");
   }
   return 0;
}