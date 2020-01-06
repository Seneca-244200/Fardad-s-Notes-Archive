#include <iostream>
using namespace std;
// sales.h
namespace sales {
   class Car {
      // whatever sales person needs
   };
}

// man.h
namespace man {
   class Car {
      // whatever mand. dep. needs
   };
}

using namespace man;
// remember not to use a namespace in a header file.
int main() {
   sales::Car sc;
   Car mc;
   return 0;
}