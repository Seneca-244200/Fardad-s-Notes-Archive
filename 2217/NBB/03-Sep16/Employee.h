#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
namespace sdds {
   struct Employee {
      int m_empip; // class scope
      void display()const;
   };

   extern const double TAX; // << declration for the global variable
                            // Tax (Makes TAX Global)
   extern int* globalArr;

}

#endif

