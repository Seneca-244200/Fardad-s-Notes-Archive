#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void DisplayContainerWithARow(int row, const Container& C) {
   cout << row << ": ";
   C.display() << endl;
}

int main() {
   Container Cnt;
   Container* p = new Container;
   p->read();
   p->display() << endl;
   delete p;
   Cnt.read();
   Cnt.display() << endl;
   return 0;
}