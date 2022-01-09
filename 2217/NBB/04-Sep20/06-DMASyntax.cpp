#include <iostream>
using namespace std;


int main() {
   int size;
   int* ptr;
   cin >> size;
   // this happens at run time 
   ptr = new int[size];
   if (ptr != nullptr) {
      // do youe business with the millions integers

      delete[] ptr;
   }
   else {
      cout << "out of memory!" << endl;
   }

   return 0;
}

