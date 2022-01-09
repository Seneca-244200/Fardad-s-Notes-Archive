#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C(100, 350);
   Container sum(0,350);
   Container D;
   cout << C << endl;
   sum = 200 + C;
   cout << "sum: " << sum << endl;
   cout << "Enter continer value/capacity: ";
   cin >> D;
   cout << "You entered: " << D << endl;
   cout << "Capacity: " << ~D << endl;
   return 0;
}