#pragma once // combo version of the header file safeguard
#ifndef SDDS_COMPANY_H
#define SDDS_COMPANY_H
//#include "Employee.h" // adding a headerfile is when you need an instance (object) of the "Employee" in this case
namespace sdds {
   class Employee;  // we can use forward declration since m_workers is a pointer only
   class Company {
      char* m_name;
      int m_total_no_of_employees{};  // file scope (module scope)
      int m_no_of_employees{};
      Employee* m_workers{};
      void setNoOfEmployees();
      void deleteEmployees();
   public:
      void displayName();
      void startup();
      void startup(const char* name);
      void expand();  
      void listEmployees();
      void hire();
      int noOfEmployees();
      void closeDown();
   };

}
#endif // !SDDS_COMPANY_H


