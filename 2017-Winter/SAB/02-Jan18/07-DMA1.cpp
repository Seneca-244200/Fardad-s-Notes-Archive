#include <iostream>
using namespace std;

int main() {
   int cnt;
   int* num;
   int i;
   cout << "Number of ints: ";
   cin >> cnt;
   num = new int[cnt];
   if (num) {
      for (i = 0; i < cnt; i++) {
         cout << i + 1 << ": ";
         cin >> num[i];
      }
      for (i = cnt - 1; i >= 0; i--) {
         cout << num[i] << " ";
      }
      cout << endl;
      delete[] num;
   }
   else {
      cout << "not enough memory!" << endl;
   }
   return 0;
}