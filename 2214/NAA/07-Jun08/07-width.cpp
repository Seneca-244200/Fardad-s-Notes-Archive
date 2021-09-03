#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   char str[] = "abc";
   cout << "*";
   cout << str;
   cout << "*" << endl;
   cout << "*";
   cout.width(10); // effects only the next printout. 
   cout << str;
   cout << "*" << endl;
   cout.width(10);
   cout << "*";
   cout << str;
   cout << "*" << endl;

   return 0;
}