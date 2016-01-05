#ifndef __CAR_H__
#define __CAR_H__
#include <iostream>
#include "IOable.h"
namespace oop244{

  class Car : public IOable {
  private:
    char _licensePlate[9];
    char _make[31];
    char _model[31];
    int _year;
  public:
    Car(const char* licPlt = "", const char* make = "", const char* model = "", int year = 0);
    void run();
    virtual ~Car();
    std::ostream& display(std::ostream& ostr)const;
    std::istream& read(std::istream& istr);
  };
}
#endif