#include <iostream>
using namespace std;

void getInts(int vals[], int size) {
   cout << "Please enter " << size <<" numbers:" << endl;
   for (int i = 0; i < size; i++){
      cout << (i + 1) << "/" << size << ": ";
      cin >> vals[i];
   }
   cout << "Thank you!" << endl;
}
int findMin(int vals[], int size) {
   int min = vals[0];
   for (int i = 1; i < size; i++) {
      if (vals[i] < min) min = vals[i];
   }
   return min;
}
int main() {
   int size;
   cout << "Please enter the number of values: ";
   cin >> size;
   int* values = new int[size];
   getInts(values, size);
   cout << "The minimum value in the set is " << findMin(values, size) << endl;
   delete[] values;
   return 0;
}
