#include <iostream>
using namespace std;
#include "Container.h"
int main() {
   int cnt;
   int i;
   cout << "Please enter number of ints: ";
   cin >> cnt;
   // Container* C = new Container;

   int* nums = new int[cnt];
   if (nums) {
      for (i = 0;i < cnt;i++) {
         cin >> nums[i];
      }
      for (i = cnt - 1;i >= 0;i--){
         cout << nums[i] << " ";
      }
      cout << endl;
   }
   else {
      cout << "Memory allocation failed!" << endl;
   }
   delete[] nums;
   //delete C;
}