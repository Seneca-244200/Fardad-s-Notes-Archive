#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
// << left shift 
int main() {
   Container A = 200.0, B{ 300.0, 150.0 } ,C;
   C = -50;
   if (!C) {
      cout << "invlid setting!" << endl;
      C.clear();
   }
//   cout << "Enter container(vol/cap): ";
//   cin >> A;
   cout << "A," << A << endl;
   cout << "B," << B << endl;
   cout << "C," << C << endl << "------------------------" << endl;;
   B = ++A;
   cout << "A," << A << endl;
   cout << "B," << B << endl;
   cout << "C," << C << endl << "------------------------" << endl;;
   B += A;
   C = --B;
   cout << "A," << A << endl;
   cout << "B," << B << endl;
   cout << "C," << C << endl << "------------------------" << endl;;
   A.operator+=(150);
   B.operator+=(A);
   cout << "A," << A << endl;
   cout << "B," << B << endl;
   cout << "C," << C << endl << "------------------------" << endl;;
   C = A + B;
   cout << "A," << A << endl;
   cout << "A," << A << endl;
   cout << "C," << C << endl << "------------------------" << endl;;
   A = B -= 25.30;
   /*
   Container& Container::operator-=(double vol)
   */
   return 0;
}
