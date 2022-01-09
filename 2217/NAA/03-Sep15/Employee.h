#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      int m_empip;
      void display()const;
   };

   // Global scope
   extern const double TAX;
}

#endif

