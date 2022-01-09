#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name A("Fardad");
   Name B = "Li";
   Name C;
   cout << "Begining of main" << endl;
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
   C = B = A;
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
   cout << "End of main" << endl;
   return 0;
}
