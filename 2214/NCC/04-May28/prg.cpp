#include <iostream>
using namespace std;

// The client want to enter few real numbers and print them all with lowest 
// highest values in the set.
void findMinMax(double& min, double& max, double v[], int size) {
   min = v[0];
   max = v[0];
   for (int i = 1; i < size; i++) {
      if (min > v[i]) min = v[i];
      if (max < v[i]) max = v[i];
   }
}
void getNums(double v[], int size) {
   cout << "Enter " << size << " numbers: " << endl;
   for (int i = 0; i < size; i++) {
      cout << i + 1 << ": ";
      cin >> v[i];
   }
}
void prnNums(const double v[], int size) {
   for (int i = 0; i < size; i++) {
      cout << v[i] << " ";
   }
   cout << endl;
}

int main() {
   int num;
   double* vals;
   double min, max;
   cout << "Please enter the number of samples: ";
   cin >> num;
   vals = new double[num];
   getNums(vals, num);
   findMinMax(min, max, vals, num);
   prnNums(vals, num);
   cout << "min: " << min << endl << "max: " << max << endl;
   delete[] vals;
   return 0;
}