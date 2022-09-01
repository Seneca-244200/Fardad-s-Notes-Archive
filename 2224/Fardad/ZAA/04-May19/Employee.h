#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      char m_name[41];
      double m_salary;
      int m_empId;
   };
   void display(const Employee& emp);
   void hire(Employee& empToHire);
   void fire(Employee* empToFile);
   // practice: do this:
   // void listEmployees();
   int curNoOfEmployees();
   //extern makes a file scope variable GLOBAL
   extern const int max_no_of_employees;
//  commeting the following:
//   extern int cur_no_of_employees;
// because we dont want outsiders to change
// the number of employees by mistake.
}
#endif // !SDDS_EMPLOYEE_H
