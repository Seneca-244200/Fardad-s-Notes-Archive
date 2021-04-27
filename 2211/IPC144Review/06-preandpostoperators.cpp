#include <cstdio>
using namespace std;
int main() {
   int i = 0, a = 10, b = 1;

   i = ++a; // expands to lines 8 and 9;

   a = a + 1;
   i = a;

   i = a++;  // expands to lines 14 and 15;

   i = a;
   a = a + 1;


   i = ++a + b--;  // bad practice.

   i = ++a + a--;

   return 0;
}