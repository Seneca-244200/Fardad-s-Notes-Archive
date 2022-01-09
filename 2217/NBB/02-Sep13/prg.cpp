#include <iostream>
using namespace std;
// Finance dep

C++ a.cpp b.cpp c.cpp

namespace fin {
   struct Employee {
      double salary;
   };
}

// Academic dep
namespace acd {
   struct Employee {
      char subject[51];
   };
}


namespace fin {
   struct Manager {
      struct Employee  emp[1000];
   };
}


using namespace fin;
int main() {

   struct Employee finEmp;
   struct acd::Employee acdEmp;



   return 0;

}