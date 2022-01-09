#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pointers.h"

void setTo1000(int pointer ptr) {
   targetOf ptr = 1000;
}

void readInt(int pointer ptr) {
   printf("Enter an integer: ");
   scanf("%d", ptr);
}

int main() {
   int a = 10;
   int pointer p;
   p = addressOf a;
   targetOf p = 123456;
   printf("%d\n", a);
   setTo1000(addressOf a);
   printf("%d\n", a);
   readInt(addressOf a);
   printf("you enterd: %d\n", a);
   return 0;
}