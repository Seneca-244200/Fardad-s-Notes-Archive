#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   class Employee {  // this is a clase and therefore it is
      char m_name[41]{};    // private by default
      double m_salary{};
      int m_empId{}; // universal way of nullifying anything (defaulting anything)
   public:
      void display();
      void hire();
   };

}
#endif // !SDDS_EMPLOYEE_H
