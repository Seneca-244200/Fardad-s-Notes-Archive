#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C(220, 100);
   Container D(300, 200);
   Container A;
   cout << "C" << C << endl;
   cout << "D" << D << endl;
   cout << "A" << A << endl << "-----------------------------" << endl;
   C = 100;
   cout << "C" << C << endl;
   cout << "D" << D << endl;
   cout << "A" << A << endl << "-----------------------------" << endl;
   C += 50;
   cout << "C" << C << endl;
   cout << "D" << D << endl;
   cout << "A" << A << endl << "-----------------------------" << endl;
   D += C;
   cout << "C" << C << endl;
   cout << "D" << D << endl;
   cout << "A" << A << endl << "-----------------------------" << endl;   //A = operator+(C, D);
   A = C + D;
   cout << "C" << C << endl;
   cout << "D" << D << endl;
   cout << "A" << A << endl << "-----------------------------" << endl;
   return 0;
}