#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C(200, 500);
   cout << "----------------------------" << endl;
   C.display() << endl;
   cout << "----------------------------"<< endl;
   Container(3,5).display() << endl;
   cout << "----------------------------" << endl;
   return 0;
}