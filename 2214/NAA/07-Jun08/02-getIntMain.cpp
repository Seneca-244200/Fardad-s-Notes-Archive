#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   int num1, num2;
   num1 = getInt("Enter a number: ");
   num2 = getInt("Enter another number: ");
   cout << "n1: " << num1 << "  n2: " << num2 << endl;
   return 0;
}