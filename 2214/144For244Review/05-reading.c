#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {
   int a;
   char name[30];
   printf("read int: ");
   scanf("%d", &a);// reads an integer into the address of a
   printf("read char string: ");
 //  scanf("%s", name);// name is an address of the begging of the 
                     // array of characters by itself
   scanf("%s", &name[0]);// crazy, but ok
   printf("int: %d, str: %s", a, name);
   return 0;
}