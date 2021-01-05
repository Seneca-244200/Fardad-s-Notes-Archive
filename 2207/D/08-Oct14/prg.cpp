#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container C(250, 100);
   int content;

   content = (int)C;
 
   cout << "The content of conainter C is " << content << "CCs" << endl;

//   if ((bool)C) { same as below
   if (C) {
         cout << "The container is not empty" << endl;
   }

   return 0;
}