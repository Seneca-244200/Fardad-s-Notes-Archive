#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   char cStr[51];
   scanf("%[^\n]", cStr); // no & for cStr, since cStr is already an address
   printf("%s\n",cStr);
   return 0;
}