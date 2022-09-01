#ifndef SDDS_COMPANY_H
#define SDDS_COMPANY_H
// this file is here only to answer
// peter's question for including inside 
// a header file.
//#include "Employee.h"
namespace sdds {
   struct Employee;
   void hire(Employee* emp);
   void fire(Employee* emp);
}
#endif // !SDDS_COMPANY_H
