#include <iostream>
using namespace std;

int main() {
   int* a;
   a = new int[1000000];// request to the operating system at run;
   if (a != nullptr) {
      // do youe business with the million integers
      ///
      delete[] a;  // delete only deletes if a is not nullptr
   }
   else {
      cout << "out of memory" << endl;
   }

   return 0;
}
