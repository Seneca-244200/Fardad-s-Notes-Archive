
#include <iostream>
using namespace std;
class foo {



};


class container {
   foo* foos;

};


int main() {
   size_t num;
   int* numbers;
   size_t i;
   cout << "Please enter number of integers\n> ";
   cin >> num;
   numbers = new int[num];
   for (i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> numbers[i];
   }
   for (i = num - 1; i > 0; i--) {
      cout << (i + 1) << ": " << numbers[i] << endl;
   }
   cout << "1: " << numbers[0] << endl;
   delete[] numbers;
   return 0;
}
