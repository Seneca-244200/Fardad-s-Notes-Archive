#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   /*
   int c = 100, a;
   a = c++;
   // a = c;
   // c = c + 1;
   cout << a << " " << c << endl; // 100 101
   a = ++c;
   // c = c + 1;
   // a = c;
   cout << a << " " << c << endl; // 102 102
   double d = (double)c;
   int ar[100]
   ar[3];
   */
   Container C(220,100);
   Container A;
   cout << "C," << C << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   // Container Container::operator++(int)
   A = C++;
   cout << "C," << C << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   // Container operator--(Container& , int);
   C = A--;
   cout << "C," << C << endl;
   cout << "A," << A << endl << "-----------------------------" << endl;
   return 0;
}