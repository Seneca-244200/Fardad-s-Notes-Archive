#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <iostream>
#include "ConInOut.h"
namespace oop244{

  class Employee :  public ConInOut {
  private:
    char _name[31];
    int _empNo;
  public:
    Employee(const char* name="", int empNo = 0);
    virtual ~Employee();
    void work();
    std::ostream& display(std::ostream& ostr)const;
    std::istream& read(std::istream& istr);
  };
}
#endif