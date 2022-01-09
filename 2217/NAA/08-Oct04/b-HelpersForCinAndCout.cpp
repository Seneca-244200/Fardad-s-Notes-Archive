#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C(100, 350);
   Container D;
   C.display() << endl;
   cout << C << endl;
   cout << "Enter Container information: " << endl;
   cin >> C;
   cout << "You just entered: " << C << endl;

   return 0;
}