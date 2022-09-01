#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   class Employee {  // private by default
   private: // is not needed since this is class
      double m_salary;
      int m_empId;
      char m_name[41];   // class scope
   public:
      void hire();
      void display();
   };
/* if you like to use a struct
   struct Employee { // public by defult
   //public: // not needed since this is a sturct
      void display();
      void hire();
   private:      // is needes since this is sturct
      char m_name[41];   // class scope
      double m_salary;
      int m_empId;
   };
*/
   void hire();
   void listEmployees();
   void getNoOfEmployees();
   void hireMoreEmployees();
   void deleteEmployees();
   int curNoOfEmployees();

   extern Employee* m_workers;  // turns the m_workers file scope variable to global (any file includding employee.h)
}
#endif // !SDDS_EMPLOYEE_H
