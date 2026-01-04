#include <iostream>
#include "pointer.h"
using namespace std;

int main() {
   int var;
   int Pointer ptr;
   ptr = AddressOf var;
   TargetOf ptr = 12345;

   cout << var << endl;

   return 0;
}