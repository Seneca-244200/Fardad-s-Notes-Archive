#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name A;

   A.addToName("Fernanda").addToName(" ").addToName("Goncalves")
      .addToName(" ").addToName("Rios").print() << endl;

   return 0;
}