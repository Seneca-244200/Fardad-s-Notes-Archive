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
   Animal& C_AR = C;
   Animal* C_AP = &C;
   //G.name( "Freddie" ); protected
   G.act();
   C_AR.act( );// forgets being a cat!.
   C_AP->act(); // forgets being a cat
   //C_AR.play(); syntax error
   C.act();
   C.move();
   C.sound();
   C.play();
   A.act( );
   A.move( );
   A.sound( );
   cout << "------------End of main" << endl;
   return 0;
}
