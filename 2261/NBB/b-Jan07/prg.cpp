// file abc.h  for adm

namespace adm {

   struct Student {

   };


}

// file abc.cpp for adm

namespace adm {


}

// file def.cpp for edu

namespace edu {

   struct Student {

   };
}


#include <iostream>
using namespace std;
using namespace adm;
int main() {
   Student admStd;
   edu::Student eduStudent;
   std::cout << "Jan07 - OOP244 NBB" << std::endl; 
   return 0;
}

