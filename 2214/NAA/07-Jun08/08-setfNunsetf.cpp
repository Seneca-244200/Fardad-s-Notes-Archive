#include <iostream>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;

int main() {
   char str[] = "abc";
   cout.setf(ios::left);
   cout << "*";
   cout << str;
   cout << "*" << endl;
   cout << "*";
   cout.width(10); // effects only the next printout. 
   cout.fill('^'); // all the output to come.
   cout << str;
   cout.unsetf(ios::left);
   cout << "*" << endl;
   cout.width(10);
   cout << "*";
   cout << str;
   cout << "*" << endl;

   return 0;
}