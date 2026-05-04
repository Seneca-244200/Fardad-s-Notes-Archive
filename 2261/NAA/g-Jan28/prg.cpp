#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
void ShowValidInt(const ValidatedInt& v) {
   v.display();

}
//// this will crash...
//void ShowValidInt(ValidatedInt v) {
//   v.display();
//}
int main() {
   cout << "OOP244 NAA - Jan28" << endl;
   ValidatedInt def;

   ValidatedInt vi("OOP244 Mark", 80, 0, 100);

   def.display();

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

   ShowValidInt(def);
   ShowValidInt(vi);

   return 0;
}