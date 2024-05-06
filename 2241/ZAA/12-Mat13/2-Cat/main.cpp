#include <iostream>
using namespace std;
#include "Utils.h"
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
int main() {
   sdds::debug = true;
   Animal A( "Coco" );
   Cat C("Fluffy", 5);
   Cat G;
   Animal& AG = G; 
   //G.name( "Freddie" );
   G.act();
   AG.act( );// forgets being a cat!.
   C.act();
   C.move();
   C.Animal::sound( );
   C.sound( );
   C.play();
   A.act( );
   A.move( );
   A.sound( );
   cout << "------------End of main" << endl;
   return 0;
}
