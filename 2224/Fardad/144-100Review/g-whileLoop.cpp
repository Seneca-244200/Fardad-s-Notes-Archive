

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
   int a = 10;
   int b = 20;
   int counter = 0;
   /*  if (a < b) {
        a += 1;
        printf("a is %d\n", a);
     }*/

   while (a < b) {
      a += 1;
      printf("a is %d\n", a);
      counter++;
   }
   printf("loop repeated %d times\n", counter);
   counter = 0;
   while (a < b) {
      a += 1;
      printf("a is %d\n", a);
      counter++;
   }
   printf("loop repeated %d times\n", counter);


   return 0;
}