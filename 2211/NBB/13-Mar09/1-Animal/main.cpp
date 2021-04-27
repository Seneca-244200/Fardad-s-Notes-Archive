#include <iostream>
using namespace std;
#include "Animal.h"
using namespace sdds;
int main() {
   //sdds::debug = true;
   Animal A = "Buffy";
   A.act();
   A.move();
   A.sound();
   cout << "------------End of main" << endl;
   return 0;
}

