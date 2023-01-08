#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
//void displayIntArray(IntArray IA) {
//   for (unsigned int i = 0; i < IA.size(); i++) {
//      cout << IA.element(i) << " ";
//   }
//   cout << endl;
//}
void displayIntArray(const IntArray& IA) {
   for (unsigned int i = 0; i < IA.size(); i++) {
      cout << IA[i] << " ";
   }
   cout << endl;
}
int main() {
   int a[10] = { 11,20,40,45,78,345,34,23,23,89 };
   IntArray I(5);
   for (unsigned int i = 0; i <30; i++) {
      //I.operator[](i) = (i + 1) * 10;
      I[i] = (i + 1) * 10;
   }
   displayIntArray(I); // displayIntArray(IntArray IA = I)
   I = a; // it will work since I is resized to 
   displayIntArray(I); // displayIntArray(IntArray IA = I)
   I.resize(10);
   I = a; // it will work since I is resized to 
   displayIntArray(I); // displayIntArray(IntArray IA = I)
   I.resize(8);
   displayIntArray(I); // displayIntArray(IntArray IA = I)
   I.resize(3);
   displayIntArray(I); // displayIntArray(IntArray IA = I)
   return 0;
}