#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int val;
   val = U.getInt("Enter an integer: ");
   cout << "You entered: " << val << endl;
   cout << "Enter another: ";
   val = U.getInt();
   cout << "then you entred " << val << endl;
   return 0;
}