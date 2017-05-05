#include "Displayable.h"
#ifndef ICT_EMPLOYEE_H_
#define ICT_EMPLOYEE_H_
namespace ict{
  class Employee :public Displayable{
    int m_empno;
    char m_name[41];
    double m_salary;
    void set(int stno, const char* name, double salary);
  public:
    Employee(int stno, const char* name = "no name", double salary = 0.0);
    std::ostream& display(std::ostream& os)const;
    bool operator<=(const Employee& E)const;
    bool operator>=(const Employee& E)const;
    operator const char*()const;
  };



}
#endif 