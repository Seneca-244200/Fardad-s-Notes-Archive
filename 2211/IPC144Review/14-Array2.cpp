#include <cstdio>
using namespace std;

void prnInts(const int b[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", b[i]);
   }
   printf("\n");
}
void addEleven(int b[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      b[i] += 11;
   }
}
int main() {
   int a[3] = { 10, 20, 30 };
   addEleven(a, 3);
   prnInts(a, 3);
   return 0;
}