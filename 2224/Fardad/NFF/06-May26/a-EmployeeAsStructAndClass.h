#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
/* struct public by default
   struct Employee {  // this is a struct and therefore it is
      void hire();    // public by default
   private:
      char m_name[41];   // class scope
      double m_salary;
      int m_empId;
   public:
      void display();
   };
*/
   class Employee {  // this is a clase and therefore it is
      char m_name[41];    // private by default
      double m_salary;
      int m_empId;
   public:
      void display();
      void hire();
   };
}
#endif // !SDDS_EMPLOYEE_H
