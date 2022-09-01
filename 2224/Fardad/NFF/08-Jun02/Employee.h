#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   class Employee {  
      char m_name[41]{};   
      double m_salary{};
      int m_empId{}; 
   public:
      void display();
      void hire();
   };

}
#endif // !SDDS_EMPLOYEE_H
