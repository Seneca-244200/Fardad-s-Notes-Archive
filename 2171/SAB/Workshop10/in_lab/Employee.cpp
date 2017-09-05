#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <cstring>
#include "Employee.h"
namespace ict{

  void Employee::set(int stno, const char* name, double salary){
    m_empno = stno;
    std::strcpy(m_name, name);
    m_salary = salary;
  }
  Employee::Employee(int stno, const char* name , double salary){
    set(stno, name, salary);
  }
  std::ostream& Employee::display(std::ostream& os)const{
    return os << m_empno << " " << m_name << ", " << std::setprecision(2) << std::fixed << m_salary;
  }
  bool Employee::operator<=(const Employee& E)const{
    return m_empno <= E.m_empno;
  }
  bool Employee::operator>=(const Employee& E)const{
    return m_empno >= E.m_empno;
  }
  Employee::operator const char*()const{
    return m_name;
  }
}

