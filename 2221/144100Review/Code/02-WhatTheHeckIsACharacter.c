#include <stdio.h>
int main() {
   int i = 0;
   char message[100] = "Hello Review Students\n";
   printf(message);
   for (i = 0; message[i] != 0; i++) {
      putchar(message[i]);
   }
   for (i = 0; message[i] != 0; i++) {
      printf("%d ", message[i]);
   }
   return 0;
}