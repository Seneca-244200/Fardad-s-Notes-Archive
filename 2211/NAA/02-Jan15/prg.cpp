#include <iostream>
#include <fstream>


namespace acc {
   struct Employee {
      char name[128];
      double salary;
   };
}

namespace hr {
   struct Employee {
      char name[128];
      int hiringYear;
      char education[128];
   };
}

namespace acc {
   struct Benefit {
      // whatever
   };
}

using namespace acc;
using namespace hr;
int main() {
   acc::Employee ae;
   hr::Employee he;
   std::cout << "whatever"; // qualify cout if using namesace std is not here.
}
