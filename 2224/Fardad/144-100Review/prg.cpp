#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "pointers.h"
#include "pointers.h"
#include "pointers.h"
#include "pointers.h"
#include "pointers.h"
#include "pointers.h"
using namespace std;
/*
1234<NEWLINE>

*/
void flushKeyboard() {
   while (getchar() != '\n');
}
int readInt() {
   int num;
   char nextChar='X';
   int done = 0;
   do {
      scanf("%d%c", &num, &nextChar);
      if (nextChar != '\n') {
         printf("Enter an int value only!\n> ");
         flushKeyboard();// emptying the buffer
      }
      else {
         done = 1;
      }
   } while (!done);
   return num;
}

int main() {
   int val;
   printf("Enter an int: ");
   val = readInt();
   printf("The value is : %d\n", val);
   printf("Enter another int: ");
   val = readInt();
   printf("The value is : %d\n", val);
   return 0;
}


