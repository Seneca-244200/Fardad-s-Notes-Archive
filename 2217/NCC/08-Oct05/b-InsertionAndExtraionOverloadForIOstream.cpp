#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C(100, 350);
   cout << "C: " <<  C << endl;
   cout << "Enter Conatiner Information (value/capacity): ";
   cin >> C;
   cout << "You entered: " << C << endl;
   return 0;
}