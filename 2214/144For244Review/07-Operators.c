#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {
   int ar[24] = { 2,0,9,7,0,6,5,0,6,0,1,5,3,9,5,0,7,0,2,0,9,7,0,9 };
   int nonZero = 0;
   int noOfZero = 0;
   int noOfTwos = 0;
   int noGT5 = 0;
   int i;
   for (i = 0; i < 24; i++) {
      nonZero += !!ar[i];
      noOfZero += !ar[i];
      noOfTwos += (ar[i] == 2);
      noGT5 += (ar[i] > 5);
   }
   printf("non Zeros: %d\n", nonZero);
   printf("Zeros: %d\n", noOfZero);
   printf("No of twos: %d\n", noOfTwos);
   printf("Greater than fives: %d\n", noGT5);
   return 0;
}