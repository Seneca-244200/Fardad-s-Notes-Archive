
#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main( ) {
   int num{};
   cout << "An age: ";
   num = getInt(18, 64 );
   cout << "You entered: " << num;
   return 0;
}
