#ifndef SDDS_COMPANY_H
#define SDDS_COMPANY_H
//#include "Employee.h" // only when an instance of Employee is needed
namespace sdds {
   class Employee;
   class Company {
      char* m_name{};
      int m_total_m_no_of_employees{};
      int m_no_of_employees{};
      Employee* m_workers{};
   public:
      void open();
      void open(const char* name);
      void closeDown();
      void hire();
      void expand();
      void listEmployees();
      int noOfEmployees();
      void displayName();
   };
}
#endif // !SDDS_COMPANY_H



