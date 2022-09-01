#ifndef SDDS_COMPANY_H
#define SDDS_COMPANY_H

namespace sdds {
   class Employee;  // forward declaration instead of include, since m_workers is only a pointer
   class Company {
   private:
      char* m_name = nullptr;
      Employee* m_workers = nullptr;  // safe empty state
      int m_no_ofEmployees = 0;
      int m_total_no_of_employee;
      void setNoOfEmployees();
      void displayName();
      void deleteEmployees();
   public:
      void start();
      void start(const char* name);
      void hireMoreEmployees();
      void listEmployees();
      void hire();
      int noOfEmployees();
      void closeDown();
   };
}
#endif

