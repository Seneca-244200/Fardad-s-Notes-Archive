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
   //bool Container::operator!()const;
   if(!A) {
      cout << "Bad Container entry!" << endl;
      ~A;  // clear, not a very necessary operator, but for sake of example not a bad thing to do
   }
   // Container& Container::operator++();
   D = ++A;
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   //C.operator=(100);
   C = 100;
   //D.operator+=(50);
   D += 50;
   // Conainer& operator--(Container& operand);
   // Container& Container::operator=(const Container& right)
   // C = A = D;
   A = --C;
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   //C.operator+=(D);
   C += D;
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   ///not good so we changed it:A = operator+(C, D);
   // A = C.operator+(D)
 //  A = C + D; this will cause and error, I will let you know later.
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   // Container operator+(int, const Contianer&)
   // C = operator+(100, A);
   // C = 100 + A;
   return 0;
}