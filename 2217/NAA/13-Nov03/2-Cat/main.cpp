#include <iostream>
using namespace std;
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
int main() {
   sdds::debug = true;
   Cat C("Fluffy", 5);
   C.act();
   C.move();
   C.sound();
   cout << "------------End of main" << endl;
   return 0;
}
