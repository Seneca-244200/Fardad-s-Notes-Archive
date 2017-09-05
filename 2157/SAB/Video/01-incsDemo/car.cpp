#include "car.h"
#include <cstring>
#include <iostream>
using namespace std;
namespace oop244{

  Car::Car(const char* makeModel, const char* engineType, 
           int NoOfCylenders, double hoursePower)
           :_engine(engineType, NoOfCylenders, hoursePower){
    strncpy(_makeModel, makeModel, 40);
    _makeModel[40] = (char)0;
  }

  ostream& Car::display(ostream& os)const{
    return os << _makeModel << " engine has:" << endl << _engine;
  }
  
  ostream& operator<<(ostream& os, const Car& C){
    return C.display(os);
  }


}
