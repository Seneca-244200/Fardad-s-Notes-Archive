#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace sict{

 
  Cat::Cat(const char* name, int numOfLives):Pet(name){
    _numOfLives = numOfLives;
    prn("Creating ", this->name(), " the Cat");
  }
  void Cat::act()const{
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  void Cat::move()const{
    cout << "Move like " << name() << " the Cat" << endl;
  }
  void Cat::sound()const{
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    prn("Killing ", name(), " the Cat");
  }
}