#include <iostream>
#include "pointers.h"
using namespace std;
int main( ) {
   int A  = 10;
   int pointer p = addressOf A;
   cout << A << endl;
   targetOf p = 200;
   cout << A << endl;

   return 0;
}
