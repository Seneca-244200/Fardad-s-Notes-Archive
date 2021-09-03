#include <iostream>
using namespace std;

int main() {
   int* b = new int;
   int* a = new int[5];
   cout << "Enter int: ";
   cin >> *b;

   cout << "Enter integers: ";
   for (int i = 0; i < 5; i++) {
      cout << (i + 1) << ": ";
      cin >> a[i];
   }

   delete b;
   delete[] a;
   return 0;
}