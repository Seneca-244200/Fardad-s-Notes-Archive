#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace sict{

 
  Cat::Cat(const char* name, int numOfLives)
    :Animal(name),_numOfLives(numOfLives){
    cout << "Creating " << this->name() << " the Cat with "
      << _numOfLives << " lives" << endl;
  }
  void Cat::act(){
    Animal::act();
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  void Cat::move(){
    cout << "Move like " << name() << " the Cat" << endl;
  }
  void Cat::sound(){
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    cout << "Killing " << name() << " the Cat with "
      << _numOfLives << " lives" << endl;
  }
}