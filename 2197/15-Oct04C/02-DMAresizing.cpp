#include <iostream>
#include "StringDMA.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   String A = "Fred";
   String B;
   B.set("Soley");
   A.concat(" ").concat(B).display() << endl;
   return 0;
}