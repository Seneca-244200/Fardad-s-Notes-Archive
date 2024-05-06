#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int StrLen(const char str[]) {
   int len = 0;
   while (str[len] != 0) {
      len++;
   }
   return len;
}

void StrCpy(char des[], const char src[]) {
   //DIY
}


int main() {
   char str[51];
   printf("Enter you name: ");
   scanf("%[^\n]", str);
   printf("your name, %s is %d characaters long\n", str, StrLen(str));
   return 0;
}