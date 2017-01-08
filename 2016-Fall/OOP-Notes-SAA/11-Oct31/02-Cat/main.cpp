#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace ict;
int main(){
   Animal A;
  Cat C("Fluffy");
  C.act();
  C.sound();
//  A.move(); protected and cannot be accessed
  cout << "------------End of main" << endl;
  return 0;
}
