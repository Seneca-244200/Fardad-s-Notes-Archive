#include <iostream>

using namespace std;
int main() {
   int cnt{};
   cout << "How many ints?" << endl << "> ";
   cin >> cnt;
   int* num = new int[cnt];
   if (num == nullptr) {
      cout << "No enough memory!" << endl;
   }
   else {
      int i{};
      for (i = 0; i < cnt; i++) {
         cout << i + 1 << ": ";
         cin >> num[i];
      }
      cout << "reversed: " << endl;
      for (i = cnt - 1; i >= 0; i--) {
         cout << num[i] << " ";
      }
      cout << endl;
   }
   delete[] num;
   return 0;
}
