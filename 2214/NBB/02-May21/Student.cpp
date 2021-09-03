#include <iostream>
#include "Student.h"
using namespace std;
namespace sdds {
   void Student::getInfo() {
      // read stno;
      std::cout << "stno: ";
      std::cin >> stno;
      // read name;
      cout << "name: ";
      cin >> name;
      // read gpa;
      cout << "gpa: ";
      cin >> gpa;
   }

   void Student::print() {
      cout << "Name: " << name << endl << "stno: " << stno << endl << "gpa: " << gpa << endl;
   }
}