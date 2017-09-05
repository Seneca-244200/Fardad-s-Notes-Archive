#include <iostream>
#include <cstring>
using namespace std;
#include "Cat.h"

namespace sict{
  Cat::Cat(const char* thename, 
    int numOfLives) :Animal(thename), _numOfLives(numOfLives){
    //name(thename);
    //_numOfLives = numOfLives;
    cout << "Creating " << this->name() << " the Cat" << endl;
  }
}