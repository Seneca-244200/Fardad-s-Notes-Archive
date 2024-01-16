#include <iostream>
using namespace std;

int main( ) {
   int *sizePtr{}, i{ };
   int* p{};
   sizePtr = new int;
   cout << "How many ints?\n> ";
   cin >> *sizePtr;
   p =new int[*sizePtr];
   for ( i = 0; i < *sizePtr; i++ ) {
      cout << (i + 1) << ": ";
      cin >> p[i];
   }
   for ( i = *sizePtr - 1; i >= 0; i-- ) {
      cout << (i + 1) << ": ";
      cout << p[i] << endl;
   }
   delete[] p;
   delete sizePtr;
   return 0;
}