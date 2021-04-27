#include <iostream>
using namespace std;

// this is in file salary.cpp
namespace acc {
   struct Employee {
      char name[128];
      double salary;
   };
}

// this is in file ben.cpp
namespace acc {
   struct Benefit {
      // whatever
   };
}

// this is infile hiring.cpp
namespace hr {
   struct Employee {
      char name[128];
      int hiringYear;
      char education[128];
   };
}

using namespace acc;
using namespace hr;
int main() {
   Benefit B;
   acc::Employee accEmp;
   hr::Employee hrEmp;

}