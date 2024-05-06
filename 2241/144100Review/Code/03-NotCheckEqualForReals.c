#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double TAX = 0.13;
int main() {
   double value;
   printf("Enter tax: ");
   scanf("%lf", &value);
   //if (value == TAX) { // never check real number (floating point) for 
   //                    // equality 
   if( value - TAX > -0.000001 && value - Tax < 0.000001){
      printf("They are the same!\n");
   }
   else {
      printf("They are not the same!\n");
   }
   return 0;
}