#include <iostream>
using namespace std;
#include "animal.h"
namespace seneca{
  ostream& operator<<(ostream& OS, const Animal& A){
    A.sound();
    return OS;
  }

}
