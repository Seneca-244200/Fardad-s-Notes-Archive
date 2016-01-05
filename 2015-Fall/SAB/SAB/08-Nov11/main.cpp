#include <iostream>
#include <cstring>
using namespace std;
#include "Cat.h"
using namespace sict;
int main(){
  Cat A("fluffy", 8);
  A.act();
  A.move();
  A.sound();
  cout << "------------End of main" << endl;
  return 0;
}
