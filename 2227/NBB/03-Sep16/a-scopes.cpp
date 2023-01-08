#include <iostream>
using namespace std;
int varAtTop;    //<<== not a global vairable, but a file scope
struct Name {
   char m_value[81]; // <<=== class scope
   void display() {
      cout << m_value << endl;
   }
};
int main() {  // <<= scope of main begins
   int i;  // function scopoe
   if (whatever) { // << == scope of if begins
      int j; // block scope
      int i;  // << block scope..shadows i in function scope (hides the in in function scope)
   } // << = scope of if ends  j dies here

   return 0;
} // << 