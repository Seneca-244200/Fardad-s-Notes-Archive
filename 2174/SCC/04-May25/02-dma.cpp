#include <iostream>
using namespace std;
int main() {
   int* num;
   int NoOfints;
   int i;
   cout << "Please enter the number of integer values (1 < No < 201): ";
   cin >> NoOfints;
   num = new int[NoOfints];
   for (i = 0; i < NoOfints; i++) {
      cout << (i + 1) << ": ";
      cin >> num[i];
   }
   for (i = NoOfints - 1; i >= 0; i--) {
      cout << num[i] << " ";
   }
   cout << endl;
   delete[] num;
   return 0;
}