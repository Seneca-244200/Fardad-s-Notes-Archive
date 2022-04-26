#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
   int var[5];
   int* ptr;
   ptr = var;
   *ptr = 2345;
   printf("var: %d\n", var);
   printf("TargetOf ptr: %d\n", *ptr);
   printf("TargetOf ptr: %d\n", ptr[0]);
   printf("ptr: %u\n", ptr);
   var[3] = 345;
   printf("var[3]: %d\n", ptr[3]);


   return 0;
}
