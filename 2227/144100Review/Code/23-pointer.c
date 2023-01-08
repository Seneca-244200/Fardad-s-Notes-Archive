#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pointers.h"

int main() {
   int var; 
   int Pointer ptr; /// the define statemens are in pointers.h
   ptr = AddressOf var;
   TargetOf ptr = 2345;
   printf("var: %d\n", var);
   printf("TargetOf ptr: %d\n", TargetOf ptr);
   printf("ptr: %u\n", ptr);

   /*int var;
   int* ptr;
   ptr = &var;
   *ptr = 2345;
   printf("var: %d\n", var);
   printf("TargetOf ptr: %d\n", *ptr);
   printf("ptr: %u\n", ptr);*/

   return 0;
}