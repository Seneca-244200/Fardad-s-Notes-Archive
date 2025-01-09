#include <iostream>
using namespace std;
#include "Utils.h"
#include "Animal.h"
#include "Cat.h"
using namespace seneca;
int main() {
   seneca::debug = true;
   Animal A( "Coco" );
   Cat C("Fluffy", 5);
   Cat G;
   Animal& AG = G; 
   Animal* cp = &C;
   //G.name( "Freddie" );
   G.act();
   AG.act( );// forgets being a cat!.
   C.act();
   C.move();
   C.sound();
   cp->sound( );
   C.play();
   A.act( );
   A.move( );
   A.sound( );
   cout << "------------End of main" << endl;
   return 0;
}
