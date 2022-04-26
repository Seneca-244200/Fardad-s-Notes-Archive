#include <iostream>
using namespace std;
int varAtTop;    //<<== not a global vairable, but a file scope

int main() {  // <<= scope of main begins
   int i;  // function scopoe
   if (whatever) { // << == scope of if begins
      int j; // block scope
   } // << = scope of if ends  j dies here

   return 0;
} // << scope of main ends i dies here.