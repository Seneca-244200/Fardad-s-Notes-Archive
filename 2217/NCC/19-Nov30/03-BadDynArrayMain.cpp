#include <iostream>
#include "DynArray.h"
using namespace std;
using namespace sdds;
// this code won't compile
int main() {
   DynArray<int, 10> intArray;   //type of intArray is DynArray<int, 10>
   DynArray<int, 20> anotherIntArray; //type of anotherIntArray is DynArray<int, 20>
   intArray = anotherIntArray; // can't do this, since they are not the same, 
                               // but in Nov 25th lecture, you could because the size
                               // is passed through the constructor argument and it is 
                               // NOT part of the type of the object.
   return 0;
}