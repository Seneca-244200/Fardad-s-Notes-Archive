#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

int main() {
   Name N;
   N.setEmpty();
   N.set("Fred Soley");
   cout << N.get() << endl;
   N.display() << " is the name!" << endl;
   N.set("John Doe");
   N.display() << endl;
   N.deallocate();
   return 0;
}