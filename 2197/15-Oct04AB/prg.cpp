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
   B = A = 10;
   B = A += 20;
   C = B += A;
   ++A;
   A++;
   return 0;
}