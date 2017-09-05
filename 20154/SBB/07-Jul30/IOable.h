#ifndef __IOABELS_H__
#define __IOABELS_H__
#include <iostream>
#include "ConInOut.h"
namespace oop244{
  class IOable : public ConInOut{
  public:
    virtual ~IOable();
  };
  std::ostream& operator<<(std::ostream& ostr, const IOable& cio);
  std::istream& operator>>(std::istream& ostr, IOable& cio);

}
#endif