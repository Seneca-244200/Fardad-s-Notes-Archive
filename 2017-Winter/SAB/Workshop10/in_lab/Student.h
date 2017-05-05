#include "Displayable.h"
#ifndef ICT_STUDENT_H_
#define ICT_STUDENT_H_
namespace ict{

  class Student :public Displayable{
    int m_stno;
    char m_name[41];
    void set(int stno, const char* name);
  public:
    Student(int stno, const char* name = "no name");
    Student(const Student& S) = delete;
    Student& operator=(const Student& S) = delete;
    std::ostream& display(std::ostream& os)const;
    bool operator<=(const Student& S)const;
    bool operator>=(const Student& S)const;
    operator const char*()const;
  };
}
#endif 