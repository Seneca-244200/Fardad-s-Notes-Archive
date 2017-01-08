#include <stdio.h>
const double pi = 3.14159265;
void printInt(const int* p) { // can't change the targer
   pritnf("%d", *p);
}

int main(void) {
   int a = 25;
   int b = 60;
   printInt(&a);
   int* const p = &a;  // p only points to a
   const int* const q = &a; // is both
   p = &b; // error

   return 0;
}