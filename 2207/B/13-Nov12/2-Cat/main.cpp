#include <iostream>
using namespace std;
#include "Animal.h"
#include "Cat.h"
using namespace sdds;
int main() {
   Cat C("Fluffy", 5);
   C.act();
   C.move();
   C.sound();
   C.name("Tom");
   C.act();
   cout << "------------End of main" << endl;
   return 0;
}
