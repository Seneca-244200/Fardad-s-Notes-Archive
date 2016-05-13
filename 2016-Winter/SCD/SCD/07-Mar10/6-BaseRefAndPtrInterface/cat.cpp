#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace sict{

 
  Cat::Cat(const char* name, int numOfLives):Pet(name){
    _numOfLives = numOfLives;
    prn("Creating ", this->name(), " the Cat");
  }
  void Cat::act(){
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  void Cat::move(){
    cout << "Move like " << name() << " the Cat" << endl;
  }
  void Cat::sound(){
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    prn("Killing ", name(), " the Cat");
  }
}