#include <iostream>
using namespace std;
int main() {
   int* sizePtr{};  // points to the size of the array ({} is same as = nullptr)
   int* nums=nullptr; // dynamic array of integers
   cout << "Please enter the number of integers\n> ";
   sizePtr = new int;
   cin >> *sizePtr;
   nums = new int[*sizePtr]; // at this moment, during execution, the array will be created;
   cout << "Please enter " << *sizePtr << " integers:" << endl;
   for (int i = 0; i < *sizePtr; i++) {
      cout << (i + 1) << "> ";
      cin >> nums[i];
   }
   cout << "Here are the numbers in reverse order:" << endl;
   for (int i = *sizePtr - 1; i >= 0; i--) {
      if (i != *sizePtr - 1) cout << ", ";
      cout << nums[i];
   }
   delete[] nums;
   delete sizePtr;
   return 0;
}