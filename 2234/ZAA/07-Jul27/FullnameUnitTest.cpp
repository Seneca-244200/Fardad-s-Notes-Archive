#include <iostream>
#include "Fullname.h"
using namespace std;
using namespace sdds;

Fullname getName(Fullname& name ) {
   cout << "Full Name please: ";
   cin >> name;
   return name;
}

int main( ) {
   Fullname thename;
   Fullname N{ "Bart", "Simpson" };
   cout << "N: " << N << endl;
   N = getName( thename);
   cout << "Hello " << N << endl;
   return 0;
}
