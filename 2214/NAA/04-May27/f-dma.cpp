#include <iostream>
#include "Scope.h"
using namespace std;

int main() {
   int* b = new int;
   int* a = new int[5];
   // work with a and b;
   delete b;
   delete[] a;
   return 0;
}