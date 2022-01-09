#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C(100, 350);
   Container D(0, 300);
   cout << "C: " << C << endl << "D: " << D << endl;
   D = 175 + C;
   cout << "D = 175 + C" << endl;
   cout << "C: " << C << endl << "D: " << D << endl;

   return 0;
}