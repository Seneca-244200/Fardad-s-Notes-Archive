#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NAA - Jan28" << endl;
   ValidatedInt vi;

   vi.initialize(50, 0, 100);
   vi.display();                    // Value: 50 (range: 0 to 100)

   vi.addToValue(30);              // Adds 30 -> 80 (within range)
   vi.display();                   // Value: 80 (range: 0 to 100)

   vi.addToValue(40);              // Adds 40 -> 120, clamped to 100
   vi.display();                   // Value: 100 (range: 0 to 100)

   vi.reduceValue(20);             // Reduces by 20 -> 80 (within range)
   vi.display();                   // Value: 80 (range: 0 to 100)

   vi.reduceValue(90);             // Reduces by 90 -> -10, clamped to 0
   vi.display();                   // Value: 0 (range: 0 to 100)

   vi.setValue(75);                // Back to valid
   vi.display();                   // Value: 75 (range: 0 to 100)

   //cout << "\nDirectly modifying 'value' without validation:" << endl;
   //vi.m_value = 150;                 // Set outside max (no clamping happens)
   //vi.display();                   // Value: 150 (range: 0 to 100) — INVALID!

   //vi.m_value = -50;                 // Set outside min (no clamping happens)
   //vi.display();                   // Value: -50 (range: 0 to 100) — INVALID!


   return 0;
}