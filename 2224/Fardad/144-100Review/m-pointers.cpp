#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "pointers.h"
using namespace std;
int main() {
   int var;
   //int Pointer ptr = AddressOf var;
   int* ptr = &var;
   var = 234;
//   printf("%d\n", TargetOf ptr);
   printf("%d\n", *ptr);

//   TargetOf ptr = 1000;
   *ptr = 1000;

   printf("%d\n", var);

   return 0;
}
