// file abc.h  for adm

namespace adm {

   struct Student {

   };


}

// file abc.cpp for adm

namespace adm {
   struct  Loan {

   };

}

// file def.cpp for edu

namespace edu {
  struct Subject {

   };
   struct Student {

   };
}


#include <iostream>
using namespace std;
using namespace adm;
using namespace edu;
int main() {
   adm::Student admStd;
   edu::Student eduStudent;
   Loan L;
   Subject S;
   std::cout << "Jan07 - OOP244 NBB" << std::endl; 
   return 0;
}

