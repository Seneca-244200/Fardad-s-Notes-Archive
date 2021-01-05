

#include <iostream>
using namespace std;
// using reference (C++)
void readInt(int& num) {
   cout << "int: ";
   cin >> num;
}
// using address (C)
void readInt(int* num) {
   cout << "int: ";
   cin >> *num;
}

int main() {
   int i;
   readInt(i); // C++ call
   cout << i << endl;
   int j;
   readInt(&j); // C call
   cout << j << endl;
   return 0;
}
