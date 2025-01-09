#include <iostream>
using namespace std;
#include "Animal.h"
#include "Utils.h"
using namespace seneca;

  Animal showAnimal(Animal X) { 
   cout << "Showing " << X.name() << endl;
   return X;
}

int main() {
   seneca::debug = true;
   Animal A = "Fluffy"; // one arg constructor
   A.act();
   A.move();
   A.sound();
   showAnimal(A); //showAnimal(Animal X = A) 
   cout << "------------End of main" << endl;
   return 0;
}

