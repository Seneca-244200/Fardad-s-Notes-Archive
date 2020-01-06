#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container A, B, C;
   int i = 10;
   //if (!A) {
   //   
   //}
   //if (A.operator!()) {
   //   
   //}
   A = B += i;
   A = B += C;             // potato
   A = B.operator+=(C);    // potaato
   A = B + C;
   return 0;
}