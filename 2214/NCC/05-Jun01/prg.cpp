#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name n;
   n.init();
   n.set("Fred", "Soley");
   n.print();
   n.set("Jack", "Black");
   n.print();
   n.deleteMem();
   return 0;
}