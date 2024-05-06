#include <iostream>
#include "Utils.h" 
#include "Array.h"
using namespace std;
using namespace seneca;

void goToNext( int* p ) {
   cout << "I am at " << *p << endl;
   p++;
   cout << "Now I am at " << *p << endl;
}

int main( ) {
   int a[5] = { 10, 20, 30, 40, 50 };
   int* aptr = &a[2];

   cout << "Before goToNext atpr is: " << *aptr << endl;
   goToNext( aptr );
   cout << "After goToNext atpr is: " << *aptr << endl;

   return 0;
}