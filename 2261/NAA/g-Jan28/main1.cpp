#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NAA - Jan28" << endl;
   ValidatedInt vi;

   initialize(vi, 50, 0, 100);
   display(vi);                    // Value: 50 (range: 0 to 100)

   addToValue(vi, 30);             // Adds 30  80 (within range)
   display(vi);                    // Value: 80 (range: 0 to 100)

   addToValue(vi, 40);             // Adds 40  120, clamped to 100
   display(vi);                    // Value: 100 (range: 0 to 100)

   reduceValue(vi, 20);            // Reduces by 20  80 (within range)
   display(vi);                    // Value: 80 (range: 0 to 100)

   reduceValue(vi, 90);            // Reduces by 90  -10, clamped to 0
   display(vi);                    // Value: 0 (range: 0 to 100)

   setValue(vi, 75);               // Reset to valid value
   display(vi);                    // Value: 75 (range: 0 to 100)

   setValue(vi, 40);               // Reset to valid value
   display(vi);                    // Value: 75 (range: 0 to 100)

   return 0;
}