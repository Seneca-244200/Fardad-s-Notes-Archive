#include "engine.h"
#include <iostream>
#include <cstring>
using namespace std;
namespace oop244{

  Engine::Engine(const char* type, int noOfCylenders, double hoursePower){
    _noOfCylenders = noOfCylenders;
    _hoursePower = hoursePower;
    strncpy(_type, type, 40);
    _type[40] = (char)0;
  }
  ostream& Engine::display(ostream& os)const{
    return os << "Number of Cylenders: " << _noOfCylenders << ", Hourse Power: " << _hoursePower;
  }
  ostream& operator<<(ostream& os, const Engine& E){
    return E.display(os);
  }

}
