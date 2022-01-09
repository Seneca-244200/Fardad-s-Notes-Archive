#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "DynMarks.h"
using namespace std;
using namespace sdds;
int main() {
   double samples[] = { 34, 56,99.8,45 };
   cout << "Methods, Privacy and DMA!" << endl;
   DynMarks finals;
   DynMarks midterms;
   finals.init("OOP244 Final", samples, 4);
   midterms.init();
   finals.display();
   midterms.display();
   finals.add(99.9);
   finals.display();
   finals.cleanUp();
   return 0;
}