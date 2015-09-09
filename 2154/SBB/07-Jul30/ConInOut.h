#ifndef __CONINOUT_H__
#define __CONINOUT_H__
#include <iostream>
namespace oop244{
  class ConInOut{
  public:
    virtual std::ostream& display(std::ostream& ostr)const = 0;
    virtual std::istream& read(std::istream& istr) = 0;
  };
}


#endif