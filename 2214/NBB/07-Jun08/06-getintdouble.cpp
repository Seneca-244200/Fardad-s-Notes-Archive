#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;


int main() {
   int num1;
   double num2;
   get(num1, "Enter an integer: ");
   cout << "Enter a double: ";
   get(num2);
   cout << "n1: " << num1 << " n2: " << num2 << endl;
   return 0;
}