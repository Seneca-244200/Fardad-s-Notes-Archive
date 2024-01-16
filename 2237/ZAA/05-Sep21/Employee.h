#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
namespace sdds {
   struct Employee {
      char* m_name;
      int m_empNo;
      double m_salary;
      void init( );
      void set( const char* name,
               int empNo,
               double salary );
      void display( )const;
      void finalize( );
   };

}
#endif // !SDDS_EMPLOYEE_H_


