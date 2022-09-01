#ifndef SDDS_COMPANY_H
#define SDDS_COMPANY_H
#include "Name.h"
//#include "Employee.h" // only when an instance of Employee is needed
namespace sdds {
   class Employee;
   class Company {
      Name m_name{};
      int m_total_m_no_of_employees{};
      int m_no_of_employees{};
      Employee* m_workers{};
      void open();
      void open(const char* name);
      void closeDown();
   public:
      Company();
      Company(const char* name);
      ~Company();
      void hire();
      void expand();
      void listEmployees();
      int noOfEmployees();
      void displayName();
   };
}
#endif // !SDDS_COMPANY_H



