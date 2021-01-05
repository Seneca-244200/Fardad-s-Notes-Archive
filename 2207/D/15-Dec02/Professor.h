#ifndef SDDS_PROFESSOR_H_
#define SDDS_PROFESSOR_H_
#include <iostream>
#include "Employee.h"
namespace sdds {
   class Professor : public Employee {
      char* m_subjects{};
      void setsubjct(const char* subject);
   public:
      Professor(const char* name = "", long emplno = -1, const char* subjects = "");
      Professor(const Professor&);
      Professor& operator=(const Professor&);
      virtual std::istream& read(std::istream& istr = std::cin);
      virtual std::ostream& write(std::ostream& ostr = std::cout)const;
      virtual ~Professor();
   };
}

#endif // !SDDS_PROFESSOR_H_

