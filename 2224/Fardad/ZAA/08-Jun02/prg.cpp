#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name N;
   Name F;

   Name& Nref = N;
   N.set("Nina Doe").display() << endl;
   F.set("Fred Soley").display() << endl;
   N.set(F).display() << endl;
   N.set(Nref).display() << endl;

//   N.display() << endl;
//   F.display() << endl;
   // this; only has meaning if it is inside a class!
   return 0;
}
