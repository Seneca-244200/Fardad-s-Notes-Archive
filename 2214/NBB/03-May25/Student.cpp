#include <iostream>
#include "Name.h"
#include "Student.h"

using namespace std;
namespace sdds {
   void Student::getInfo() {
      // read stno
      // read name
      // read gpa
   }
   void Student::print() {
      cout << stno << endl;
      stname.print();
      cout << gpa << endl;
   }
}