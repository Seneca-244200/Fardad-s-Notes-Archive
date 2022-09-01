
#ifndef SDDS_COMPANY_H
#define SDDS_COMPANY_H
namespace sdds {
   class Employee;  
   class Company {
      char* m_name;
      int m_total_no_of_employees{}; 
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


