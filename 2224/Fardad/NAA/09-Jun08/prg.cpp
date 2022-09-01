#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C(220);
   Container D(300, 200);
   Container A;
   cout << "Enter Container (vol/cap): ";
   cin >> A;
   cout << "C," << C << endl;
   cout << "C," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   //C.operator=(100);
   C = 100;
   //D.operator+=(50);
   D += 50;
   cout << "C," << C << endl;
   cout << "C," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   //C.operator+=(D);
   C += D;
   cout << "C," << C << endl;
   cout << "C," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   ///A = operator+(C, D);
   A = C + D;
   cout << "C," << C << endl;
   cout << "C," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   return 0;
}