#include <iostream>
#include "Container.h"
using namespace sdds;
using namespace std;
int main() {
   Container C("Milk", 200.0);
   Container D;
   C.print() << endl;
   D = C++;// will not automaticaly do the ++ after!!!!!
   D.print() << endl;
   C.print() << endl;
   return 0;
}