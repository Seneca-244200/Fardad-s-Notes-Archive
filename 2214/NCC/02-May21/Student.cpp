#include <iostream>
#include "Student.h"
using namespace std;
namespace sdds {
   void Student::getInfo() {
      // read stno
      // read name
      // read gpa
   }
   void Student::print() {
      cout << "Student number: " << stno << endl;
      cout << "Name: " << name << endl;
      cout << "Gpa: " << gpa << endl;
   }
}