#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C(220);
   Container D(300, 200);
   Container A;
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   A.display(cout << "A: ") << endl << "-----------------------------" << endl;
   C.set(100);
   D.add(50);
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   A.display(cout << "A: ") << endl << "-----------------------------" << endl;
   C.add(D);
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   A.display(cout << "A: ") << endl << "-----------------------------" << endl;
   A = sum(C, D);
   C.display(cout << "C: ") << endl;
   D.display(cout << "D: ") << endl;
   A.display(cout << "A: ") << endl << "-----------------------------" << endl;
   return 0;
}