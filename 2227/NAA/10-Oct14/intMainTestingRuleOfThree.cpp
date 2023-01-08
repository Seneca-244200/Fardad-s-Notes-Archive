#include "IntArray.h"
using namespace sdds;
int main() {
   IntArray I(5);
   IntArray J = I; // copy constructor
   IntArray K;
   K = I;  // copy assignment
   return 0;
}