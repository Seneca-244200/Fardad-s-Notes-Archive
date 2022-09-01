#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
/*
<
>
<=
>=
!=
==
*/
/*
to evalute truth or falsehood
assuming A and B are conditions
A && B;  // true only if both are ture
A || B;  // false only if both are fals;
!A       // true if A is false
*/
int getAge() {
   int age;
   printf("What is your age?\n> ");
   scanf("%d", &age);
   return age;
}
int Quebec() {
   char ch;
   printf("Are you from Quebec?(Y)/(N)\n> ");
   ch = getchar();
   return (ch == 'Y' || ch == 'y');
}
int main() {
   int limit = 19;
   if (Quebec()) {
      limit = 18;
   }
   if (getAge() >= limit) {
      printf("You are allowed to have a beer!\n");
   }
   else{
      printf("No beer for you!\n");
   }

   return 0;
}