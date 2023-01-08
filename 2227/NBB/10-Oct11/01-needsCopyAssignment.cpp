#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name n = "Fred Soley"; // assign at creation is one arg constructor
   Name X = "Fardood soliman";
   n.display() << endl;
   X.display() << endl;
   X = n;
   X.display();
   return 0;
}