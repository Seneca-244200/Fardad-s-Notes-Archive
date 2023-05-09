#include <iostream>
using namespace std;
int main() {
   int* cnt{}; // same as below but with {}
   int* nums = nullptr;
   cout << "Reverser!" << endl;
   cout << "Enter the number of integers: ";
   cnt = new int;
   cin >> *cnt;
  // nums = new int[cnt[0]]; // potato
   nums = new int[*cnt]; // potaato
   if (nums == nullptr) {
      cout << "Not enough memory!" << endl;
   }
   else {
      int i;
      cout << "Enter the numbers: " << endl;
      for (i = 0; i < cnt[0]; i++) {
         cout << (i + 1) << "> ";
         cin >> nums[i];
      }
      for (i = *cnt - 1; i >= 0; i--) {
         cout << nums[i] << " ";
      }
      cout << endl;
   }
   delete[] nums; // delete the way you allocate (new)
   delete cnt;
   return 0;
}