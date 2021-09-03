#include <iostream>
using namespace std;

bool getInt(int* iptr, int min, int max) {
   cout << "Enter an int: ";
   cin >> *iptr;
   return *iptr >= min && *iptr <= max;
}

int main() {
   int val=0;
   if (getInt(&val, 10, 20)) {
      cout << "Value is: " << val << endl;
   }
   else {
      cout << "Invalid value" << endl;
   }
   return 0;
}