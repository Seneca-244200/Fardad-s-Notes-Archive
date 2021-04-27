#include <iostream>
using namespace std;
void getInts(int* vals, int size) {
   cout << "Enter " << size << "integers:" << endl;
   for (int i = 0; i < size; i++) {
      cout << (i + 1) << "/" << size << ": ";
      cin >> vals[i];
   }
}
int findMax(int* vals, int size) {
   int max = vals[0];
   for (int i = 1; i < size; i++) {
      if (max < vals[i]) max = vals[i];
   }
   return max;
}
int main() {
   int* valptr;  
   int size;
   cout << "Enter the number of values: ";
   cin >> size;
   valptr = new int[size];
   getInts(valptr, size);
   cout << "The largest value entere is: " << findMax(valptr, size) << endl;
   delete[] valptr;
   return 0;
}
