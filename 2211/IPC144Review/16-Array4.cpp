#include <cstdio>
using namespace std;
void prnCstr(const char c[]) {
   int i;
   //for (i = 0; c[i] != 0; i++) {
   for (i = 0; c[i]; i++) {
         printf("%c",c[i]);
   }
   printf("\n");
}
void nextCharsInCstr(char c[]) {
   int i;
   //for (i = 0; c[i] != 0; i++) {
   for (i = 0; c[i] ; i++) {
      c[i]++;
   }
}
int main() {
//   char a[4] = { 65 , 'B', 'C' };
   char a[4] = "ABC";
   prnCstr(a);
   nextCharsInCstr(a);
   prnCstr(a);
   return 0;
}