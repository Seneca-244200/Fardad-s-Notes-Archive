#include <stdio.h>
int main() {
   char ch = 'A'; // byte
   printf("%c %d\n", ch, ch);
   ch++;
   printf("%c %d\n", ch, ch);
   return 0;
}