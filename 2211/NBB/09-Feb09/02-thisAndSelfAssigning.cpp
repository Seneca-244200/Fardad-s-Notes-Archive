#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name A, B;
 
   A.setName("Marisa").print() << endl;
   B.setName("Taner").print() << endl;
   
   A.assign(B).print() << endl;
   
   B.assign(B);
   B.print() << endl;


   return 0;
}