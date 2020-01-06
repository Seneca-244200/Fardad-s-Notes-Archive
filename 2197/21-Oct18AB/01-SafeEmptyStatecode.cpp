#include "IntArray.h"
using namespace sdds;
int main() {
   IntArray ia;
   if (ia) {
      // i is valid
   }
   else {
      // is is invalid (safe empty state)
   }
   if (!ia) {
      // is is invalid (safe empty state)
   }
   return 0;
}