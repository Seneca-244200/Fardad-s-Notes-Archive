#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   class Employee {  // class creates a Class that is private by default
      char* m_name;  // class scope variable
      double m_salary;
      int m_empId;
   public:
      void display();
      void read();
      void hire(); // too much of this will bloat your class
      void deallocateName();
   };

}
#endif

