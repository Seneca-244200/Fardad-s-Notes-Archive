#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace sict{

 
  Cat::Cat(const char* name, int numOfLives):Animal(name),_numOfLives(numOfLives){
    //_numOfLives = numOfLives;
    cout << "Creating " << this->name() << " the Cat" << endl;
  }
  void Cat::act(){
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  /*void Cat::move(){
    cout << "Move like " << name() << " the Cat" << endl;
  }*/
  void Cat::sound(){
    Animal::sound();
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    cout << "Removing "<<  name() << " the Cat" <<endl;
  }
}