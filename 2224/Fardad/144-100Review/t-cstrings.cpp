
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
void prnStr(const char* str);
void strCpy(char* des, const char* src);
int main() {
   char name[] = "Fred Soley";
   char name2[81];
   prnStr(name);
   putchar('\n');
   strCpy(name2, name);
   prnStr(name2);
   putchar('\n');
   return 0;
}
void prnStr(const char* str) {
   //for (int i = 0; str[i] != '\0'; i++) {
   for (int i = 0; str[i] != 0; i++) {
      putchar(str[i]);
   }
}
void strCpy(char* des, const char* src) {
   int i;
   for (i = 0; src[i]; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}


