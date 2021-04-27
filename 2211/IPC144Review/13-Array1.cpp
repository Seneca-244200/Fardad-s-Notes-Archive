#include <cstdio>
using namespace std;

int main() {
   //           0   1   2   3   4
   int a[10] = {10, 20, 30, 40, 50}; // a[0] -> a[9]
   int b[100] = {};
   int i;
   for (i = 0; i < 10; i++) {
      printf("%d ", a[i]);
   }
   printf("\n");
   for (i = 0; i < 100; i++) {
      printf("%d ", b[i]);
   }
   printf("\n");

   return 0;
}