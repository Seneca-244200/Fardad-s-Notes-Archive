#include <iostream>
#include "Utils.h"
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name F{ "Fred Soley" }; // same as above;
   Name S{ "Sir", "John Doe" }; // as above
   Name& Sref = S;
   F.display() << endl;
   S.display() << endl;
   S.set(F);
   S.set(Sref);
   F.display() << endl;
   S.display() << endl;
   return 0;
}