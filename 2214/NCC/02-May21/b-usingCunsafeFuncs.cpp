#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

using namespace std;

int main() {
   int age;
   printf("How old are you? ");
   scanf("%d", &age);
   if (age < 13) {
      printf("Isn't %d years old a bit to young for college\n", age);
   }
   else {
      printf("Welcome to oop244NCC\n");
   }
   return 0;
}