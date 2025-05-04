#include <iostream>
using namespace std;


void swap(double* a, double* b) {
   double temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void bubbleSort(double arr[], int size, bool ascending = true) {
   for (int i = 0; i < size - 1; ++i) {
      for (int j = 0; j < size - i - 1; ++j) {
         if (ascending) {
            if (arr[j] > arr[j + 1]) {
               swap(&arr[j], &arr[j + 1]);
            }
         }
         else {
            if (arr[j] < arr[j + 1]) {
               swap(&arr[j], &arr[j + 1]);
            }
         }
      }
   }
}
void prnCsv(const double arr[], int size) {
   for (int i = 0; i < size; i++) {
      if (i != 0) cout << ", ";
      cout << arr[i];
   }
   cout << endl;
}


int main() {
   double A[5] = { 5.1, 2.3, 10.4, 3.3, 1.5 };
   int I[10] = { 2, 4,2,7,6,3,8,8,7,1 };
   prnCsv(A, 5);
   bubbleSort(A, 5);
   prnCsv(A, 5);
   bubbleSort(A, 5, false);
   prnCsv(A, 5);
   return 0;
}