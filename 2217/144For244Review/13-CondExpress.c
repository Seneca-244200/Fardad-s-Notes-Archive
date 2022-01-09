#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int max(int a, int b) {
   int ret;
   if (a > b)
      ret = a;
   else
      ret = b;
   return ret;
}

int max(int a, int b) {
   int ret = a > b ? a : b;
   return ret;
}

int max(int a, int b) {
   return a > b ? a : b;
}


int main() {
   int a, b;

   a < b ?
      printf("whever") :
      printf("something else");
   return 0;
}