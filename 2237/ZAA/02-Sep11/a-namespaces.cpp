#include <iostream>
using namespace std;
namespace hr {
   struct Student {
      unsigned int stNo;
      char workExpr[256];
   };
   struct Employee {
      unsigned int empNo;
      char whatever[1234];
   };
}

namespace food {
   struct Student {
      unsigned int stno;
      double credit;
      char foolAler[1024];
   };
   struct restruant {
      int healthCode;
      char menu[2046];
   };
}


using namespace hr;
using namespace food;
int main( ) {
   cout << "Hello OOP244 ZAA!" << endl;
   
   hr::Student hSt;
   food::Student fSt;


   return 0;
}