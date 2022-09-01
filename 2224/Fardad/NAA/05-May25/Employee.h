#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      char* m_name;  // class scope variable
      double m_salary;
      int m_empId;
   };
   void expandCompany();
   void openCompany();
   void closeDownCompany();
   void hire();
   void hire(Employee& E);
   void display(const Employee& emp);
   void listEmployees();
   int curHiredEmployees();
}
#endif

