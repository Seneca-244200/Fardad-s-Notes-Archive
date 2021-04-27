#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name A("Mahshad"), B("Hayaturehman");
   Name* p = &A;
   cout << unsigned(&A) << endl;
   cout << unsigned(A.returnThis()) << endl;

   cout << "--------------------------------" << endl;

   cout << unsigned(&B) << endl;
   cout << unsigned(B.returnThis()) << endl;

   cout << "--------------------------------" << endl;


   A.returnTargetOfThis().print() << endl;
   A.returnThis()->print() << endl;
   p->print() << endl;
   cout << "--------------------------------" << endl;
   B.returnTargetOfThis().print() << endl;
   B.returnThis()->print() << endl;

   return 0;
}