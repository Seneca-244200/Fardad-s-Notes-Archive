#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define FS_DEBUG

void prinline(int len) {
   int j;
   for (j = 0; j < len; j++) {
      putchar('*');
   }
#ifdef FS_DEBUG
   printf("new line printing\n");
#endif // !FS_DEBUG
}

int main() {
   int i;
   for (i = 0; i < 10; i++) {
      prinline(30);
      putchar('\n');
   }

   return 0;
}