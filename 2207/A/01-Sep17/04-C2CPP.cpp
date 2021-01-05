#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

using namespace std;

int main() {
   char name[128];
   printf("What is your name? ");
   scanf("%127[^\n]", name);
   printf("Hello %s, welcome to oop244 class!\n", name);
   return 0;
}
