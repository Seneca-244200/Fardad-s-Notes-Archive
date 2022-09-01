#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
   int a = 10;
   int b = 20;
   int counter = 0;

   do {
      a += 1;
      printf("a is %d\n", a);
      counter++;
   } while (a < b);
   printf("loop repeated %d times\n", counter);
   counter = 0;
   do {   // do while loops repeat on or more
      a += 1;
      printf("a is %d\n", a);
      counter++;
   } while (a < b);
   printf("loop repeated %d times\n", counter);


   return 0;
}