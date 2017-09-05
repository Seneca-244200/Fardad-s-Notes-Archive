#include "ConInOut.h"
using namespace std;
namespace oop244{

  ConInOut::~ConInOut(){
  }


  ostream& operator<<(ostream& ostr, const ConInOut& cio){
    return cio.display(ostr);
  }
  istream& operator>>(istream& istr, ConInOut& cio){
    return cio.read(istr);
  }
}