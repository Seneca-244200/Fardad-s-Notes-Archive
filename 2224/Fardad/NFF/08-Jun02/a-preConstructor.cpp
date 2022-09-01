#include <iostream>
#include "Utils.h"
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name N;
   N.setEmpty();
   N.set("Fardad Soleimanloo");
   N.display() << endl;
   N.set("John Doe");
   N.display() << endl;
   N.deallocate();
   return 0;
}