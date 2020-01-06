#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Animal.h"
using namespace std;
namespace sdds {
  
   Animal::~Animal(){}

  ostream& operator<<(ostream& os, const Animal& rightOperand) {
    return rightOperand.display(os);
  }
  istream& operator>>(istream& is, Animal& rightOperand) {
    return rightOperand.read(is);
  }

}