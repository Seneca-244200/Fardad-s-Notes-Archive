#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;

int main() {
   Mark M;
   M.init();
   M.display();
   M.clearAtEnd();
   return 0;
}

