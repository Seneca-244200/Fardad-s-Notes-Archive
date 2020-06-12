#include <iostream>
#include "string.h"
using namespace std;
using namespace sdds;
int main() {
   //   String A("xyz");
   String A = "xyz" ;
   String B;
   String C;
   A.print();
   cout << endl;
//   B.operator=("fardad");
   C = B = "fardad";
   B.print();
   cout << endl;
 //  if (A.operator>(B)) {
   if (A > B) {
         A.print();
   }
   else {
      B.print();
   }
   cout << " is greater" << endl;
   C = " soley";
   B += C;
   B.print();
   cout << endl;
   //  B = 23; make this happen for bonus
   return 0;
}