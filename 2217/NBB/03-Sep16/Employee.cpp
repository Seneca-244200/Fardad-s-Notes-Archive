#include <iostream>
#include "Employee.h"
using namespace std;

namespace sdds {
   const double TAX = 0.13; // << Global
   int garr[5] = { 1,2,3,4,5 };

   int* globalArr  = garr;


   const int UnionDue = 30; // << file scope

   void Employee::display()const {
      cout << "Employee id: " << m_empip << endl;
      cout << "Union Dues: " << UnionDue << "%" << endl;
      cout << "tax: " << TAX << endl;
   }

}