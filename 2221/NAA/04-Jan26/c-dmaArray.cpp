#include <iostream>
using namespace std;
/*
Get several integers from console, then print them in reverse order.
*/
// ~fardad.soleimanloo/submit 244/w2/p1 -due to see the date changes
int main() {
   int cnt;
   int* val = nullptr;
   cout << "Enter the number of integer values: ";
   cin >> cnt;
   // ask OS to give me cnt ingeters and keep the address in val
   val = new int[cnt];  // now I may use val as an integer array
   if (val == nullptr) {
      cout << "Out of memory!" << endl;
   }
   else {
      int i;
      cout << "Enter values:" << endl;
      for (i = 0; i < cnt; i++) {
         cout << i + 1 << "> ";
         cin >> val[i];
      }
      for (i = cnt - 1; i >= 0; i--) {
         cout << val[i] << " ";
      }
      cout << endl;
      delete[] val;  // but it is better to put it where you are sure you have memory allocate
      val = nullptr; // good pratice to do it as a rookie
   }
   //delete[] val;  // we could put it here since deleting a nullptr has no effect;
   return 0;
}

