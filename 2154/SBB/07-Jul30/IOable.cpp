#include "IOable.h"
#include <iostream>
using namespace std;
namespace oop244{

  IOable::~IOable(){
  }
  ostream& operator<<(ostream& ostr, const IOable& cio){
    return cio.display(ostr);
  }
  istream& operator>>(istream& istr, IOable& cio){
    return cio.read(istr);
  }
}