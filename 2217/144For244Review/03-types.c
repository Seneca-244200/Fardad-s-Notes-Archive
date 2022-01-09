#include <stdio.h>
const double PI = 3.14159265;
int main() {
   /*
   char -128 ->127,  0 - 255
   short 16^2
   int   32 ^ 2
   long  32 ^ 2
   long long 64 ^ 2
   
   */
   unsigned char ch = -1;
   double a, b;
   a = 1. + 2.;
   b = 123. - 120.;
   printf("%.10lf %.10lf\n", a, b);
   printf("%d\n", ch);
   return 0;
}