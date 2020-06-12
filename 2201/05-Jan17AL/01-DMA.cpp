#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void printReport(const int* array, int size, int sum) {
   int i;
   cout << "Sum of:" << endl;
   for (i = 0; i < size; i++) {
      cout << array[i] << " ";
   }
   cout << endl << "is " << sum << endl;
}

int main() {
   int* a;
   int size;
   int sum = 0;
   cout << "Please enter the number of integer values: ";
   cin >> size;
   a = new int[size];
   if (a == nullptr) {
      cout << "Not enough memory, go and buy some ram!" << endl;
   }
   else {
      int i;
      cout << "Enter " << size << " int values:" << endl;
      for (i = 0; i < size; i++) {
         cout << (i + 1) << ": ";
         cin >> a[i];
         sum += a[i];
      }
      printReport(a, size, sum);
   }
   delete[] a;
   return 0;
}