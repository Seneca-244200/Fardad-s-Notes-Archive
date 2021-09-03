#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;


int main() {
   Name A;
   Name B;
   A.set("Fred", "Soley").print();
   B.set("Mark", "Jackson").print();

   return 0;
}