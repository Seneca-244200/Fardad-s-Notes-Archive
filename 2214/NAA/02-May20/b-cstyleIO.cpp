#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
   int age;
   printf("hello there!\nHow old are you? ");
   scanf("%d", &age);
   if (age < 16) {
      printf("Isn't %d years old too young to be in college!\n", age);
   }
   else {
      printf("Welcome to oop244\n");
   }
   return 0;
}