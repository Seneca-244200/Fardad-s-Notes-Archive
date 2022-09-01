#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
void prn(const int a[], int size) { // follow the logic and make arrays const if they are not to be modified in fucntions
   for (int i = 0; i < size ; printf("%d ", a[i++]));
   printf("\n");
}
int main() {
   int ar[5] = { 10, 20, 30, 40, 50 };
   printf("%d\n", *ar);
   *ar = 123;
   prn(ar, 5);
   ar[3] = 3333;      // *(ar + 3)
   *(ar + 1) = 1111; // ar[1]
   prn(ar, 5);

   return 0;
}
