#include <iostream>
#include "pointers.h"
using namespace std;
int main( ) {
   size_t num{}, i{};
   double* val = nullptr;
   double sum{};
   cout << "How many numbers?\n> ";
   cin >> num;
   val = new double[num];
   while ( i < num ) {
      cout << (i + 1) << ": ";
      cin >> val[i];
      sum += val[i++];
   }

   for ( i = 0; i < num; i++ ) {
      if ( i ) {
         cout << " + ";
      }
      cout << val[i];
   }
   cout << " = " << sum;
   delete[] val;
   return 0;
}
