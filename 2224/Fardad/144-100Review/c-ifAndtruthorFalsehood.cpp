#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
int foo() {
   int d;
   printf("enter a number: ");
   scanf("%d", &d);
   return d;
}
int main() {
   int condition = 1234;
   if (condition) {
      printf("Condition is ture and is %d\n", condition);
   }
   else {
      printf("Contition is false and is %d\n", condition);
   }
   condition = 0;
   if (condition) {
      printf("Condition is ture and is %d\n", condition);
   }
   else {
      printf("Contition is false and is %d\n", condition);
   }
   if (foo()) {
      printf("Condition is ture\n");
   }
   else {
      printf("Contition is false\n");
   }
   if (foo()) {
      printf("Condition is ture\n");
   }
   else {
      printf("Contition is false\n");
   }
   return 0;
}