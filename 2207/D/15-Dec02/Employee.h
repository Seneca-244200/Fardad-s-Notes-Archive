#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
#include <iostream>

namespace sdds {
   class Employee {
      char* m_name{};
      long m_empno;
      void setname(const char* name);
   public:
      Employee(const char* name = "", long empno = -1);
      Employee(const Employee&);
      Employee& operator=(const Employee&);
      virtual std::istream& read(std::istream& istr = std::cin);
      virtual std::ostream& write(std::ostream& ostr = std::cout)const;
      virtual ~Employee();
   };
   std::ostream& operator<< (std::ostream& ostr, const Employee& E);
   std::istream& operator>>(std::istream& istr, Employee& E);
}

#endif // !SDDS_EMPLOYEE_H_
