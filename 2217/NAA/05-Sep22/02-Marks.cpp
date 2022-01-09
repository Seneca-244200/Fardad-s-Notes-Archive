#include <iostream>
#include "Marks.h"
using namespace std;
using namespace sdds;
int main() {
   Marks Quiz1;
   Marks W1;
   /* display(Quiz1);
    display(W1);*/
   Quiz1.init();
   W1.init();
   Quiz1.display();
   W1.display();
   W1.set("Workshop 1");
   W1.add(66.3);
   W1.display();
   // W1.NoOfValues = 2;
   W1.display();
   cout << "DMA and Methods and Privacy" << endl;
   return 0;
}