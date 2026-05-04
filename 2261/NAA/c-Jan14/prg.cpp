#include <iostream>
#include "pointer.h"


using namespace std;

int main() {
   cout << "OOP244 NAA - Jan 14" << endl;
   int val = 23;
   int Pointer p;
   p = AddressOf val;
   cout << TargetOf p << endl;
   TargetOf p = 30;
   cout << TargetOf p << endl;
   return 0;
}
