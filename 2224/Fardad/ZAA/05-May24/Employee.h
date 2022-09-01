#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      char m_name[41];   // class scope
      double m_salary;
      int m_empId;
   };
   void display(const Employee& emp);
   void hire();
   void hire(Employee& emp);
   void listEmployees();
   void getNoOfEmployees();
   void hireMoreEmployees();
   void deleteEmployees();
   int curNoOfEmployees();

   extern Employee* workers;  // turns the workers file scope variable to global (any file includding employee.h)
}
#endif // !SDDS_EMPLOYEE_H
