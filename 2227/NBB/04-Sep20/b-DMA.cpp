#include <iostream>
using namespace std;
int main() {
   int num{};
   int* array{};
   //same as:
   //int* array = nullptr;
   cout << "How many numbers? ";
   cin >> num;
   array = new int[num]; // request OS for num integers int heap;
   if (array == nullptr) {
      cout << "Not enough memory!" << endl;
   }
   else { // everything good, keep going
      int i;
      cout << "Please enter " << num << " integer values..." << endl;
      for (i = 0; i < num; i++) {
         cout << (i + 1) << ": ";
         cin >> array[i];
      }
      cout << "Values in reverse: " << endl;
      for (i = num - 1; i >= 0; i--) {
         cout << array[i] << " ";
      }
      cout << endl;
      delete[] array;
      array = nullptr;
   }
   return 0;
}