#include <iostream>
#include <cstring>
using namespace std;
namespace sales {
   class SalesPerso {

   };
   class Car {
      // what ever the sales person needs about a car
   };
}


namespace man {
   class Robot {

   };
   class Car {
      // whatever the man. dept. needsd
   };
}


using namespace man;
using namespace sales;
int main() {
   man::Car mC;
   sales::Car sC;
   Robot R;

   return 0;
}