
#include <iostream>
#include "Name.h"
#include "utils.h"
using namespace std;
using namespace sdds;


int main() {
   int num;
   double val;
   read(num, "Please enter your age: ", "Bad age value, try again: ");
   cout << "You entered: " << num << endl;
   cout << "Enter a number: ";
   read(val);
   cout << "You entered: " << val << endl;
   return 0;
}