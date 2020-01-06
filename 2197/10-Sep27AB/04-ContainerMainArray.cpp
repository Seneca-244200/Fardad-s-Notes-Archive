#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C[3] = { 10, 20, Container(23,500) };
   for (int i = 0; i < 3; i++) {
      C[i].display() << " ";
   }
   cout << endl;
   return 0;
}