#include <iostream>
using namespace std;
const int expansionSize = 2;
int main() {
   int num;
   int i =0 ;
   int allocationSize = 2;
   bool done = false;
   int* val = new int[allocationSize];
   cout << "Enter the number of integer values and enter -1 to end entry" << endl;
   cout << "Enter the values:" << endl;
   do {
      cout << i + 1 << "> ";
      cin >> num;
      if (num < 0) {
         done = true;
      }
      else {
         if (i >= allocationSize){  // I got to the end or the array, resizing is needed
            // temp in a local block scoped temprary variable
            int* temp = new int[allocationSize + expansionSize]; 
            for (int j = 0; j < allocationSize; j++) {
               temp[j] = val[j];
            }
            delete[] val;
            allocationSize += expansionSize;
            val = temp;
         }
         val[i++] = num;
      }
   } while (!done);

   for (int j = 0; j < i; j++) {
      cout << val[j] << " ";
   }
   cout << endl;
   delete[] val;

   return 0;
}
