#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container B = 55;
   B.display() << endl;
   B.set(40).display() << endl;
   return 0;
}