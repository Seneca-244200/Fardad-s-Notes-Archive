#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Student.h"
namespace ict{
  void Student::set(int stno, const char* name){
    m_stno = stno;
    std::strcpy(m_name, name);
  }
  Student::Student(int stno, const char* name){
    set(stno, name);
  }
  std::ostream& Student::display(std::ostream& os)const{
    return os << m_stno << " " << m_name;
  }
  bool Student::operator<=(const Student& S)const{
    return m_stno <= S.m_stno;
  }
  bool Student::operator>=(const Student& S)const{
    return m_stno >= S.m_stno;
  }
  Student::operator const char*()const{
    return m_name;
  }

}
