// to be continued......
#include <iostream>
using namespace std;
const int InitMemSize = 10;
int* resize(int* val) {
   int* newMem =   // resize thing is not easy and needs more concidration.
}
int main() {
   int* val;
   int num;
   int i = 0;
   bool done = false;
   val = new int[InitMemSize];
   cout << "Enter the values and enter a nagative value to exit:" << endl;
   do {
      cout << i + 1 << "> ";
      cin >> num;
      if (num > 0) {
         val[i] = num;
         i++;
         if (i == InitMemSize) {
            val = resize(val);
         }
      }
      else {
         done = true;
      }
   } while (!done);


   delete[] val;
   return 0;
}
