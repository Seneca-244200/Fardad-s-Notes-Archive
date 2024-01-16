#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
namespace sdds {
  class Employee {
  //private:
     char* m_name;
     int m_empNo;
     double m_salary;
     bool valid( const char name[], int empNo, double salary );
     void finalize( );
  public:
     Employee( ); // will be called when object is beint created (right after)
     ~Employee( );  // will be called right before the object dies
     bool isValid( )const;
     void init( const char name[], int empNo, double salary );
     void display( )const;
     bool salary( double value );

  };

}
#endif // !SDDS_EMPLOYEE_H_


