#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      char m_name[41];
      double m_salary;
      int m_empId;
   };
   void hire();
   void fire(const Employee& emp);
   void display(const Employee& emp);
   void read(Employee& emp);
   void listEmployees();
   int curHiredEmployees();
   extern const int max_no_of_employees;
}
#endif

