#include <iostream>
using namespace std;

int main() {
   int num;
   int* val = nullptr; // keep unused pointers as null
   int i;
   cout << "Enter the number of integer values: " << endl;
   cin >> num;
   val = new int[num];
   cout << "Enter the values:" << endl;
   for (i = 0; i < num; i++) {
      cout << i + 1 << "> ";
      cin >> val[i];
   }
   for (i = num - 1; i >= 0; i--) {
      cout << i + 1 << ": " << val[i] << endl;
   }
   delete[] val;
   return 0;
}
