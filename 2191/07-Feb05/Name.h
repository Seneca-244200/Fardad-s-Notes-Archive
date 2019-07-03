#ifndef SICT_NAME_H__
#define SICT_NAME_H__
#include <iostream>
namespace sict {

  class Name {
    char* m_first;
    char* m_last;
  public:
    Name();
    Name(const Name& copyFrom);
    Name(const char fname[], const char lname[]);
    ~Name();
    void copy(const Name& copyFrom);
    void operator=(const Name& copyFrom);
    void display();
    std::ostream& display(std::ostream& ostr);
  };


}


#endif

