#include <iostream>
#include <cstring>
using namespace std;
#include "animal.h"
using namespace sdds;
int main(){
   Animal A = "Buffy";
 //  Animal A("Buffy");
   Animal B;
   A.act();
   A.move();
   A.sound();
   B.act();
   B.move();
   B.sound();
   cout << "------------End of main" << endl;
  return 0;
}
