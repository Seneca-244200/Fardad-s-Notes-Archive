#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void DisplayContainerWithARow(int row, const Container& C) {
   cout << row << ": ";
   C.display() << endl;
}

int main() {
//   Container C("Milk", 10, 9); // old
   Container C{ "Milk", 10, 9 };  // universal init
   C.display() << endl;
   return 0;
}