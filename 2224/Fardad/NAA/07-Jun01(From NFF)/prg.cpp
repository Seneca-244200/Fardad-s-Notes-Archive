#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int val{};
   val = U.getInt("Enter an integer: ");
   cout << "First one is: " << val << endl << "Enter another: ";
   val = U.getInt();
   cout << "next one is: " << val << endl;
   return 0;
}