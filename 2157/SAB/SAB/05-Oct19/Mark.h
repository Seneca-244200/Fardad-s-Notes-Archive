#ifndef SICT_MARK_H__
#define SICT_MARK_H__
#include <iostream>
using namespace std;
namespace sict{
  class Mark{
    char* _name;
    int _value;
    int _outOf;
    void allocate(int size);
    void deallocate();  
  public:
    Mark();
    Mark(const char* name, int value, int outOf = 100);
    Mark(const Mark& CM);
    ~Mark();
    Mark& operator=(const Mark& CM) ;
    void setValue(int value);
    void setOutOf(int outOf);
    void setName(const char* name);    // set subjectName
    const Mark& dspWMark()const;
    const Mark& dspName()const;
    const Mark& nl()const;
    const Mark& sp()const;
    ostream& display()const;
    Mark& add(const Mark& RO);
    Mark& operator+=(const Mark& RO);
    //    Mark(const Mark& CM);  to prevent copying
    //    Mark& operator=(const Mark& CM) = delete;  to prevent assigning to another Mark
  };
  Mark sum(const Mark& LO, const Mark& RO);
  Mark operator+(const Mark& LO, const Mark& RO);
}
#endif