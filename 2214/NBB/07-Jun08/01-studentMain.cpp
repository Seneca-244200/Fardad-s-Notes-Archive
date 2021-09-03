#include <iostream>
#include "Student.h"
using namespace sdds;
using namespace std;
int main() {
   Student S("Fred", "Soley", 123456, 3.5),
       Bad1("AAA", "BBB", 123, 3.5),
      Bad2("AAA","BBB", 123456, 4.1);
   S.print();
   Bad1.print();
   Bad2.print();
   return 0;
}