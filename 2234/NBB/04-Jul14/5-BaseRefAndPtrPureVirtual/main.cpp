#include <iostream>
#include "animal.h"
#include "cat.h"
#include "Dog.h"
using namespace std;
using namespace sdds;
void act(  Animal& A ) {
   A.act( );
}
int main() {
   sdds::debug = true;
  // Animal A("SomeName"); //Can not create since it is abract.
   Dog d;
   Animal* p[4] = { new Cat( "Jack" ),
      new Dog( "Snowy" ), new Cat( "Jill" ), &d };
  
   //Animal* p[4] = { new Cat( "Jack" ),
   //   new Dog( "Snowy" ), new Cat( "Jill" ), new Dog };
   Animal& R = d;
   int i;
   for (i = 0; i < 4; i++) {
      act( *p[i] );
      p[i]->sound();
   }
   for (i = 0; i < 3; delete p[i++]);
   cout << "------------End of main" << endl;
   return 0;
}
