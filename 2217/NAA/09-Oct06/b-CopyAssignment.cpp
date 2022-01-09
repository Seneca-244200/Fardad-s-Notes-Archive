#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name A("Fardad");
   Name B = "Li";
   cout << "Begining of main" << endl;
   cout << A << endl;
   cout << B << endl;
   B = A;
   cout << A << endl;
   cout << B << endl;

   A = A; // self assignment
   cout << A << endl;
   cout << B << endl;
   cout << "End of main" << endl;
   return 0;
}
