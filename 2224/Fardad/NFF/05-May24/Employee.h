#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      char m_name[41];   // class scope
      double m_salary;
      int m_empId;
   };
   void getNoOfEmployees();
   void expandTheCompany();
   void hire(Employee& EmpToHire);
   void hire();
   void display(const Employee& emp);
   void listEmployees();
   int curHiredEmployees();
   void deleteEmployees();
   extern Employee* workers; // makes file scope workers global to inculders of "employee.h"
}
#endif // !SDDS_EMPLOYEE_H
