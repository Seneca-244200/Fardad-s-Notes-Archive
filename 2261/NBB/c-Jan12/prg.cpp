#include <iostream>
using namespace std;
#include "pointer.h"

int main() {
   int a = 10;
   int Pointer p = AddressOf a;
   cout << TargetOf p << endl;
   return 0;
}
