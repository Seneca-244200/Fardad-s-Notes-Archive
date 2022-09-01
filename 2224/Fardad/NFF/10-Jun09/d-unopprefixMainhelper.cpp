#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {


   Container C(220, 100);
   Container D(300, 200);
   Container A;
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   A = --D; //  Container& Container::operator++();
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   cout << "Enter container (vol/cap): ";
   return 0;
}