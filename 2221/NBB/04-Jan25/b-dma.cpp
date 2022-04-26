#include <iostream>
using namespace std;

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
         if (i < allocationSize) {
            val[i++] = num;
         }
         else {  // I got to the end or the array, resizing is needed
            int* temp = new int[allocationSize + 2]; 
            for (int j = 0; j < allocationSize; j++) {
               temp[j] = val[j];
            }
            delete[] val;
            allocationSize = allocationSize + 2;
            val = temp;
            val[i++] = num;
         }
      }
   } while (!done);


   delete[] val;
   return 0;
}
