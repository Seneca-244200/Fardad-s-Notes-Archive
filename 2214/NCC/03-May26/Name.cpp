#include <iostream>
#include "Name.h"
using namespace std;
namespace sdds {
   void Name::print() {
      cout << first << " " << middle << " " << last << endl;
   }
}