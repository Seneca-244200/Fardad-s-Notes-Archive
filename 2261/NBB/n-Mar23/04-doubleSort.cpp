#include <iostream>
using namespace std;

void swap(double* a, double* b) {
   double t = *a;
   *a = *b;
   *b = t;
}

void bbl_sort(double arr[], size_t size, bool ascending = true) {
   for (size_t i = 0; i < size - 1; i++) {
      for (size_t j = 0; j < size - i - 1; j++) {
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

void prn_csv(double arr[], size_t size) {
   for (size_t i = 0; i < size; i++) {
      cout << arr[i];
      if (i != size - 1)  cout << ", ";
   }
   cout << endl;
}


int main() {
   double vals[] = { 10.1, 5.5, 20.3, 50.4, 1.1 };
   bbl_sort(vals, 5);
   prn_csv(vals, 5);
   bbl_sort(vals, 5, false);
   prn_csv(vals, 5);
   return 0;
}