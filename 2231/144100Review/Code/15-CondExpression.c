#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int foo();  
int faa();
void getRes(int res);
int main() {
   int res;
   if (condtion)
      res = foo();
   else
      res = faa();

   res = condition ? foo() : faa();

   getRes(res);

   getRes(condition ? foo() : faa()); // very normal in C (C++)

   int a, b, c;

   a = cond ? b : c;

   if (cond) {
      a = b;
   }
   else {
      a = c;
   }

   getRes(cond ? b : c);

   return 0;
}