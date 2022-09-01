#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      char m_name[41];
      double m_salary;
      int m_empId;
   };
   void hire(Employee& EmpToHire);
   void fire(Employee& EmpToFire);
   void display(const Employee& emp);
   // practice:
   void listEmployees();
   int curHiredEmployees();
   //extern turns a filescope valriable "Global" to any module including the header file.
   extern const int max_no_of_employees;
   
   //extern int cur_no_of_employees; not a good idea, since it exposed a non costant variable to everyone...

}
#endif // !SDDS_EMPLOYEE_H
