#include <iostream>
using namespace std;
#include "Animal.h"
#include "Utils.h"
using namespace sdds;
// good way
//const Animal& showAnimal( const Animal& X ) {
//   cout << "Showing " << X.name( ) << endl;
//   return X;
//}
// horrilbe way!!!!
Animal showAnimal(Animal X ) {
   cout << "Showing " << X.name( ) << endl;
   return X;
}

int main() {
   sdds::debug = true;
   Animal A = "Fluffy"; // one arg constructor
//   Animal A( "Fluffy"); // one arg constructor
//   Animal A{ "Fluffy" }; // one arg constructor
   A.act();
   A.move();
   A.sound();
   showAnimal(A); //showAnimal(Animal X = A) 
   cout << "------------End of main" << endl;
   return 0;
}

