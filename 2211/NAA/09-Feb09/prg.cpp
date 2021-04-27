#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name A;
   A.setName("Fardad");
   A.addToName(" ");
   A.addToName("Soelimanloo");
   A.print() << endl;

   // Fardad Soleimanloo

   return 0;
}