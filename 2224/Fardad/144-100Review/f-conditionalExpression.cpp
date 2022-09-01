#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
   int a, b;
   int max;
   printf("Enter two integers: ");
   scanf("%d %d", &a, &b);
   // fast
   max = a > b ? a : b; //  (a and b must be of same type)
   // slow
 /*  if (a > b) {
      max = a;
   }
   else {
      max = b;
   }*/

   printf("%d is bigger!\n", max);

   return 0;
}