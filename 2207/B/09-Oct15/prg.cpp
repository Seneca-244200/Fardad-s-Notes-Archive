#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   int content;
   Container D("D", 120, 150);
   D.display() << endl;
   content = (int)D;
   cout << "D's content is " << content << " cc" << endl;
   if (D) {
      cout << "D is not empty!" << endl;
   }

   return 0;
}