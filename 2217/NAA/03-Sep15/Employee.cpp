#include <iostream>
#include "Employee.h"
using namespace std;

namespace sdds {
   const double TAX = 0.13;

   //File scope;
   const int UnionDue = 30;

   void Employee::display()const {
      cout << "Employee id: " << m_empip << endl;
      cout << "the Union due is " << UnionDue << "%" << endl;
   }

}