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
   cout << "OOP244 NAA - Feb04" << endl;
   ValidatedInt def, X;

   ValidatedInt vi("OOP244 Mark", 80, 0, 100);

   def.display();

   vi.display();                    // Value: 50 (range: 0 to 100)

 //  vi.operator+=(30);              // Adds 30 -> 80 (within range)

   vi += 30;

   vi.display();                   // Value: 80 (range: 0 to 100)

   //def = vi.operator+=(40);              // Adds 40 -> 120, clamped to 100
   def = vi += 40;
   vi.display();                   // Value: 100 (range: 0 to 100)

 //  vi.operator-=(20);             // Reduces by 20 -> 80 (within range)
   vi -= 20;
   vi.display();                   // Value: 80 (range: 0 to 100)

//   vi.operator-=(90);             // Reduces by 90 -> -10, clamped to 0
   def = vi -= 90;
   vi.display();                   // Value: 0 (range: 0 to 100)

//   vi.operator=(75);                // Back to valid
   X = def = vi = 75;
   // vi will be set to 75 and vi is returned
   // X = def = vi
   // def will be set to vi and def is returned
   // X = def;
   // X will be set to def and X is returned but no one catches is
//   X.operator=(def.operator=(vi.operator=(75)));
   vi.display();                   // Value: 75 (range: 0 to 100)

   ShowValidInt(def);
   ShowValidInt(vi);

   return 0;
}