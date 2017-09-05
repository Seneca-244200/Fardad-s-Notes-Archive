#include <iostream>
#include "Mark.h"

using namespace std;
using namespace sict;


int main() {
   Mark M(30, 50);
   Mark* p = new Mark(40, 50);
   M.display();
   cout << endl;
   p->display();
   cout << endl;
   delete p;
   cout << endl;
   M.displayType(DSP_GRADE);
   M.display();
   cout << endl;
   return 0;
}