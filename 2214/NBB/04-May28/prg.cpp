#include <iostream>
using namespace std;
// The client want to enter few real numbers and print them all with lowest 
// highest values in the set.

void getNums(double v[], unsigned int size) {
   cout << "Enter " << size << " numbers: " << endl;
   for (int i = 0; i < size; i++) {
      cout << i + 1 << ": ";
      cin >> v[i];
   }
}
void findMinMax(double& mn, double& mx, const double v[], unsigned int size) {
   mn = mx = v[0];
   for (int i = 0; i < size; i++) {
      if (mn > v[i]) mn = v[i];
      if (mx < v[i]) mx = v[i];
   }
}
void prnNums(const double v[], unsigned int size) {
   for (int i = 0; i < size; i++) {
      cout << v[i] << " ";
   }
   cout << endl;
}
int main() {
   unsigned int num;
   double* vals;
   double min, max;
   cout << "Please enter the number of samples: ";
   cin >> num;
   vals = new double[num];
   if (vals) {
      getNums(vals, num);
      findMinMax(min, max, vals, num);
      prnNums(vals, num);
      cout << "min: " << min << " max: " << max << endl;
      delete[] vals;
   }
   else {
      cout << "Failed to allocate memory";
   }
   return 0;
}