#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
namespace sdds {
  struct Employee {
  private:
     char m_name[26];
     int m_empNo;
     double m_salary;
     bool valid( const char name[], int empNo, double salary );
  public:
     bool isValid( )const;
     void init( const char name[], int empNo, double salary );
     void display( )const;
     bool salary( double value );
  };

}
#endif // !SDDS_EMPLOYEE_H_


