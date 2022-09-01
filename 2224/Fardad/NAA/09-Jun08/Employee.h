#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
#include <iostream>
#include "Name.h"
namespace sdds {
   class Employee {  // class creates a Class that is private by default
      Name m_name{};  // class scope variable
      double m_salary{};
      int m_empId{};
   public:
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      void hire(); // too much of this will bloat your class
   };

}
#endif

