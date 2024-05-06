#include <iostream>
#include "pointers.h"
using namespace std;
int main( ) {
   int a = 25;
   int pointer p = addressOf a;
   targetOf p = 12345;
   cout << a << endl;

   return 0;
}
