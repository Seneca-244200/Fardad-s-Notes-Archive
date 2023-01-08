#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void DisplayContainerWithARow(int row, const Container& C) {
   cout << row << ": ";
   C.display() << endl;
}

int main() {
   Container C;
   C.read().display() << endl;
   C.set("Water", 100, 50).display() << endl;


   return 0;
}