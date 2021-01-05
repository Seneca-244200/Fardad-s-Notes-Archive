#include <iostream>
using namespace std;
//void setMax(int a[], int size, int val) {
//   int i;
//   int imax = 0;
//   for (i = 1; i < size; i++) {
//      if (a[imax] < a[i]) {
//         imax = i;
//      }
//   }
//   a[imax] = val;
//}
int& max(int a[], int size) {
   int i;
   int imax = 0;
   for (i = 1; i < size; i++) {
      if (a[imax] < a[i]) {
         imax = i;
      }
   }
   return a[imax];
}


void prnInts(int a[], int size) {
   for (int i = 0; i < size; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
}

int main() {
   int nums[5] = { 1,4,3,7,2 };
   prnInts(nums, 5);
   cout << max(nums, 5) << endl;
   max(nums, 5) = 0;
   prnInts(nums, 5);
   return 0;
}

