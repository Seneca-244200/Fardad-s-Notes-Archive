#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

void foo() {
   Name M;
   M.setName("Mahrokh Sadrolodabaee");
   M.print() << endl;
}

int main() {
   Name N;
   Name AN("Andrei Agmata");
   N.print() << endl;
   N.setName("Fardad Soleimanloo");
   N.print(cout) << endl;
   foo();
   N.setName("Fernanda Goncalves Rios");
   N.print() << endl;
   AN.print() << endl;
   return 0;
}