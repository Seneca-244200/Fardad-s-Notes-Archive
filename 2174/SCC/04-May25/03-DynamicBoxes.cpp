#include <iostream>
#include "Box.h"
using namespace sict;
using namespace std;
int main() {
   Box* B;
   int NoOfBoxes;
   cout << "How many boxes? ";
   cin >> NoOfBoxes;
   B = new Box[NoOfBoxes];
   if (B == nullptr) {
      cout << "Failed to allocate!" << endl;
   }
   else {
      //do whatever you want to do!
   }



   delete[] B;
   return 0;
}