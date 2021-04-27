#include <cstdio>
using namespace std;
void prnChars(const char c[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%c",c[i]);
   }
   printf("\n");
}
void nextChars(char c[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      c[i]++;
   }
}
int main() {
   char a[3] = { 65 , 'B', 'C' };
   prnChars(a, 3);
   nextChars(a, 3);
   prnChars(a, 3);
   return 0;
}