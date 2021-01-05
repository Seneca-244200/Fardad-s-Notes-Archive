#include <iostream>
using namespace std;

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
void getInts(int a[], int size) {
   int i;
   cout << "Please enter " << size << " ints:\n";
   for (i = 0; i < size; i++) {
      cout << i + 1 << ": ";
      cin >> a[i];
   }
}
int main() {
   int* nums;
   int cnt;
   cout << "How many ints you want to enter? ";
   cin >> cnt;
   nums = new int[cnt];
   getInts(nums, cnt);
   cout << "Biggest number you entered is: " << max(nums, cnt) << endl;
   prnInts(nums, cnt);
   delete[] nums;
   return 0;
}