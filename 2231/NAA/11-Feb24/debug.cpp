#include <iostream>
#include "debug.h"
using namespace std;
#ifdef SDDS_DEBUG
D_Test::D_Test(int val) {
   clog << val << " is created" << endl;
}
#endif // SDDS_DEBUG


