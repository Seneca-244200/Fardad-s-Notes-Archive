#include <iostream>
#include <cstring>
using namespace std;
#include "animal.h"
using namespace ict;
int main(){
  Animal A;
  A.act();
  A.move();
  A.sound();
  cout << "------------End of main" << endl;
  return 0;
}
