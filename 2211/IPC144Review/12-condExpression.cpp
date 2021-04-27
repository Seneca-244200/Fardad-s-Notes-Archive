#include <cstdio>
using namespace std;

int func();
double func2();

int main() {
   int value;
   if (cond) {
      value = something;
   }
   else {
      value = somethingElse;
   }
   
   value = cond ? something : somethingElse;

   if (cond) {
      func();
   }
   else {
      func2();
   }

   cond ? func() : (int)func2();

   // don't do this, but you can!
   cond1 ? whatever : (cond2 ? (cond3?whatever2:whatever3) : lastthing);

   return 0;
}