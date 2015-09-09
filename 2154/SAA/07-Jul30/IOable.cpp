#include "IOable.h"
#include <iostream>
using namespace std;
namespace oop244{

  IOable::~IOable(){
  }
  std::ostream& operator<<(std::ostream& ostr, const IOable& cio){
    return cio.display(ostr);
  }
  std::istream& operator>>(std::istream& istr, IOable& cio){
    return cio.read(istr);
  }

}
