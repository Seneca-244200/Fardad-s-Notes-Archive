#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
#include "Name.h"
namespace sdds {
   class Employee {  // private by default
   private: // is not needed since this is class
      double m_salary;
      int m_empId;
      Name m_name{};   // class scope
   public:
      void hire();
      void display();
   };
   extern Employee* m_workers;  // turns the m_workers file scope variable to global (any file includding employee.h)
}
#endif // !SDDS_EMPLOYEE_H
