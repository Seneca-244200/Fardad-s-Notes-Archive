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
   A = C -= 40;
   //Continer& Container::operator-=(int vol);
   // Container& Container::operator=(Container& C)
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   cout << "Enter container (vol/cap): ";
   cin >> D;
   if (!D) {  // bool Container::operator!()const;
      cout << "Invalid Container values!" << endl;
   }
   cout << "C," << C << endl;
   cout << "D," << D << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   return 0;
}