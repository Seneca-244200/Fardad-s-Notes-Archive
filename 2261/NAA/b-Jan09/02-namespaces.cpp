namespace osap {
   struct Student {


   };
}

namespace edu {
   struct Student {


   };
   struct Subject {

   };
}

namespace osap {
   struct Loan {

   };
}


#include <iostream>
using namespace osap;
using namespace edu;
int main() {
   std::cout << "OOP244NAA Jan 09" << std::endl;
   osap::Student os;
   edu::Student es;
   Loan l;
   Subject S;

   return 0;
}