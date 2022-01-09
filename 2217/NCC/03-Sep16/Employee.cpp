#include <iostream>
#include "Employee.h"
using namespace std;

namespace sdds {
   const double TAX = 0.13;
   const int UnionDue = 30;// file scope

   void Employee::display()const { // m_empid class scope
      cout << "Employee id: " << m_empip << endl;
      cout << "the Union due is " << UnionDue << "%" << endl;
   }

}