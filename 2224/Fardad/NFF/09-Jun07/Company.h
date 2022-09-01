
#ifndef SDDS_COMPANY_H
#define SDDS_COMPANY_H
#include "Name.h"
namespace sdds {
   class Employee;  
   class Company {
      Name m_name{};
      int m_total_no_of_employees{}; 
      int m_no_of_employees{};
      Employee* m_workers{};
      void setNoOfEmployees();
      void deleteEmployees();
      void startup();
      void startup(const char* name); 
      void closeDown();
   public:
      Company();
      Company(const char* name);
      ~Company();
      void displayName();
      void expand();  
      void listEmployees();
      void hire();
      int noOfEmployees();

   };

}
#endif // !SDDS_COMPANY_H


