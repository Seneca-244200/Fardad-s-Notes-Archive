#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C;
   C =500;
   for (int i(0); i < 5; i++) {
      C.display() << " ";
   }
   cout << endl;
   Container(200).display() << endl;
   cout << "----------------------------" << endl;
   return 0;
}