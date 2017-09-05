#ifndef __CONINOUT_H__
#define __CONINOUT_H__
#include <iostream>
namespace oop244{
  class ConInOut{
  public:
    virtual ~ConInOut();
    virtual std::ostream& display(std::ostream& ostr)const = 0;
    virtual std::istream& read(std::istream& istr) = 0;
  };

  std::ostream& operator<<(std::ostream& ostr, const ConInOut& cio);
  std::istream& operator>>(std::istream& istr, ConInOut& cio);
}
#endif

