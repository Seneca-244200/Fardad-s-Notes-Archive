#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
   int a;
   int b;
   int counter;
   //while (a < b) {
   //   a += 1;
   //   printf("a is %d\n", a);
   //   counter++;
   //}
   for (a = 10, b = 20, counter = 0; a < b; a += 1, printf("a is %d\n", a), counter++);
   printf("loop repeated %d times\n", counter);

   return 0;
}

/*
statement 1;
while(condition){
   body;
   statement 2;
}

for(statement 1;condition;statement 2){
   body;
}

*/
