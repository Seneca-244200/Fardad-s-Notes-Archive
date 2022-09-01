#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
#include "Name.h"
namespace sdds {
   class Employee {  
      Name m_name{};   
      double m_salary{};
      int m_empId{}; 
   public:
      void display();
      void hire();
   };

}
#endif // !SDDS_EMPLOYEE_H
