#include <iostream>
using namespace std;
#include "Animal.h"
using namespace sdds;

//Animal showAnimal( Animal X ) {  // Animal X = A when called
//   cout << "Showing " << X.name( ) << endl;
//   return X;
//}
const Animal& showAnimal(const Animal& X ) {  // Animal X = A when called
   cout << "Showing " << X.name( ) << endl;
   return X;
}

int main() {
   sdds::debug = true;
   Animal A = "Buffy"; // assingment at the moment of creation is  call to a "ONE" argumetn constructor
   Animal B;
   B = A;
   A.act();
   A.move();
   A.sound();
   showAnimal(A);
   cout << "------------End of main" << endl;
   return 0;
}

