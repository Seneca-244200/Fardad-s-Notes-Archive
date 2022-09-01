#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
   int i;
   int ar[5] = { 10, 20, 30, 40, 50 };
   printf("%d\n", *ar);
   *ar = 123;
   for (i = 0; i < 5; printf("%d ", ar[i++]));
   printf("\n");
   ar[3] = 3333;      // *(ar + 3)
   *(ar + 1) = 1111; // ar[1]
   for (i = 0; i < 5; printf("%d ", ar[i++]));

   return 0;
}
