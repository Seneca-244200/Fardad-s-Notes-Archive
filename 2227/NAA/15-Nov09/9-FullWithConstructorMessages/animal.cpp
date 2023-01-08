#include <iostream>
using namespace std;
#include "animal.h"
namespace sdds{
  ostream& operator<<(ostream& OS, const Animal& A){
    A.act();
    A.move();
    A.sound();
    return OS;
  }
}
