#include <iostream>
#include <cstring>
using namespace std;
#include "animal.h"
#include "cat.h"

namespace sdds{

 
  Cat::Cat(const char* thename, int numOfLives): Animal(thename) {
    _numOfLives = numOfLives;
    cout << "Creating " << this->name() << " the Cat" << endl;
  }
  void Cat::act(){
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  /*void Cat::move(){
    cout << "Move like " << name() << " the Cat" << endl;
  }*/
  void Cat::sound(){
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    cout << "Removing "<<  name() << " the Cat with " << _numOfLives << " left " <<  endl;
  }
}