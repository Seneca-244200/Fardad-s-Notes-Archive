#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   int i;
   int noOfE = 0;
   char cStr[] = "Hello Review Students\n";
   for (i = 0; cStr[i]; i++) {
      noOfE += (cStr[i] == 'e');
   }
   printf("Totoal of  %d 'e's in %s\n", noOfE, cStr);
   return 0;
}