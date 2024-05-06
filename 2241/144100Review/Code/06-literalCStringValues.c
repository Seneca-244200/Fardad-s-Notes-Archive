#include <stdio.h>
int main() {
   int i = 0;
   char ch;
   for (i = 0; "Hello Review Students\n"[i] != 0; i++) {
      ch = "Hello Review Students\n"[i];
      putchar(ch);
   }

   return 0;
}