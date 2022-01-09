#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C(100, 350);
   Container D(0, 500);
   cout << "C: " << C << endl;
   cout << "D: " << D << endl;
   D = 100 + C;
   cout << "D = 100 + C;" << endl;
   cout << "C: " << C << endl;
   cout << "D: " << D << endl;
   return 0;
}