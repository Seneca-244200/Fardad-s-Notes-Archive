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
   cout << "How many numbers: ";
   cin >> cnt;
   nums = new int[cnt];
   getInts(nums, cnt);
   prnInts(nums, cnt);
   cout << max(nums, cnt) << endl;
   max(nums, cnt) = 0;
   prnInts(nums, cnt);
   delete[] nums;

   double* p;
   p = new double;
   *p = .234;
   cout << *p << endl;
   delete p;

   return 0;
}

