#ifndef SICT_MARK_H__
#define SICT_MARK_H__
#include <iostream>

namespace sict{
  class Mark{
  private:
    char* _name;
    int _value;
    int _outOf;
    void setValue(int value);
    void setOutOf(int outOf);
    void setName(const char* name);
    void allocMem(int size);
    void deallocate();
    void dspName()const;
    void dspMark()const;
  public:
    Mark(); 
    Mark(const char* name,
      int value, int outOf = 100);
    Mark(const Mark& C);
    ~Mark();
//    void set(const Mark& C);
    Mark& operator=(const Mark& C);
    void display()const;
    Mark& operator++();
    Mark& operator++(int);
  };

  std::ostream& operator<<(std::ostream& os,
    const Mark& M);

}


#endif