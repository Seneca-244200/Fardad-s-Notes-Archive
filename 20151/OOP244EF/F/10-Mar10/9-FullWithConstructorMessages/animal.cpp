#include <iostream>
using namespace std;
#include "animal.h"
namespace oop244{
  ostream& operator<<(ostream& OS, const Animal& A){
    A.act();
    A.move();
    A.sound();
    return OS;
  }
}
