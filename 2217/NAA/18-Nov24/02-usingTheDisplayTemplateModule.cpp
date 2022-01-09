#include <iostream>
#include "Displayer.h"
using namespace std;
using namespace sdds;
int main() {
   Displayer<int> D, E = 300;
   Displayer<double> A, B = 300.1234;
   cout << D << endl;
   cout << E << endl;
   cout << "Value: ";
   cin >> D;
   cout << "The value is: " << D << endl;
   cout << A << endl << B << endl;
   cout << "double value: ";
   cin >> A;
   cout << A << endl;

   return 0;
}