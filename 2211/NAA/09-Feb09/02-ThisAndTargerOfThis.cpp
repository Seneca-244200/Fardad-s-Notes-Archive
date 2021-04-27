#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

int main() {
   Name A, B; // default constructor
   
   cout << "Address of A: " << unsigned(&A) << endl;
   cout << "Value of this in A: " << unsigned(A.returnThis()) << endl;
   cout << "Address of B: "<< unsigned(&B) << endl;
   cout << "Value of this in B: " << unsigned(B.returnThis()) << endl;

   A.returnTargetOfThis().setName("whatever");
   A.print() << endl;

   return 0;
}