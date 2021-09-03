#include <iostream>
#include "Container.h"
using namespace sdds;
using namespace std;
int main() {
   Container C("Milk", 200.0);
   Container D;
   cout << C << endl;
   D = C++;// will not automaticaly do the ++ after!!!!!
   cout << "D = C++ and the result is " << D << endl;
   cout << C << endl;
   return 0;
}