#include "Coffee.h"
using namespace sdds;
int main() {
   // coffee unit test
   return 0;
}

/* rules for where to include header files:
1- include a header file only where it is being used (even if it is another headerfile)
2- in very few occasions  headerfiles are called in another header file.
*/

/*
Namespaces are NEVER used in a headerfile but they implemeted there:
using namespace whatever; <<---- not allowed in a headerfile


namespace whatever{  <--- implementing in a namespace in a header is VERY ok.





}

*/