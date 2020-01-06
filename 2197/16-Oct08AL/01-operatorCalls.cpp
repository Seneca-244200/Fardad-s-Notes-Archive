#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container A, B, C;
   if (!A) {
      cout << "In safe emtpry state" << endl;
   }
   else {
      cout << "A is ok" << endl;
   }
   if (A) {
      cout << "A is ok" << endl;
   }
   B = A = 10;
   B = A += 20;
   C = B += A;
   ++A;
   A++;
   C = A + B;
   B = Container(234);
   int a = int(B);
   C = A - B;
   return 0;
}