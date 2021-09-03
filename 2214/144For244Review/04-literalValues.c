#include <stdio.h>
const double PI = 3.14159265;
int main() {
   long long bigValue;
   bigValue = 1LL;
   char ch = 'A' + 3;
   char name[] = "Fardad";
   printf("%s\n", name);
   printf("%c\n", name[2]);
   printf("Using string literal value:\n");
   printf("%s\n", "Fardad");
   printf("%c\n", "Fardad"[2]);
   return 0;
}