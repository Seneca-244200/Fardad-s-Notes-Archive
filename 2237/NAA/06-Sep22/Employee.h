#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
namespace sdds {
  class Employee {
  //private:
     char* m_name;
     int m_empNo;
     double m_salary;
     bool valid( const char name[], int empNo, double salary );
     void setInvalidState( );
  public:
     Employee( ); // will be called when object is being created (right after)
     Employee( const char name[], int empNo, double salary );
     Employee( const char name[] );
     ~Employee( );  // will be called right before the object dies
     bool isValid( )const;
     void display( )const;
     bool salary( double value );

  };

}
#endif // !SDDS_EMPLOYEE_H_


