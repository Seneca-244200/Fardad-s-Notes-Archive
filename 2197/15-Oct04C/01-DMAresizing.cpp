#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   String A = "Fred";
   A.concat(" ").concat("Soley").display() << endl;
   return 0;
}