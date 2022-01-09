#include <iostream>
using namespace std;
#include "Animal.h"
using namespace sdds;

const Animal& showAnimal(const Animal& X) {  // Animal X = A when called
   cout << "Showing " << X.name() << endl;
   return X;
}

int main() {
   sdds::debug = true;
   Animal A = "Buffy";
   A.act();
   A.move();
   A.sound();
   showAnimal(A);
   cout << "------------End of main" << endl;
   return 0;
}

