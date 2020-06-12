#include <iostream>
#include <cstring>
using namespace std;
#include "animal.h"
using namespace sdds;
int main(){
   Animal A = "Buffy";
 //  Animal A("Buffy");
   int i(5);
   A.act();
  A.move();
  A.sound();
  cout << "------------End of main" << endl;
  return 0;
}
