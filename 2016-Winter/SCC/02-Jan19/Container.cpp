#include "Container.h"
namespace sict{

  void Container::setConteiner(double value, double volume){
    _value = value;
    _volume = volume;
  }
  void Container::volume(double val){
    _volume = val;
  }
  double Container::volume(){
    return _volume;
  }
}
/* main

Container C;
C.setContainer();









*/