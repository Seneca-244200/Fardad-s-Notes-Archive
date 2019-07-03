#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace sict{

 
  Cat::Cat(const char* cat_name, int numOfLives):Animal(cat_name),_numOfLives(numOfLives){
    //_numOfLives = numOfLives;
    cout << "Creating " << name() << " the Cat" << endl;
  }
  void Cat::act(){
    Animal::act();
    cout << "Act playful, " << name() <<" the Cat" << endl;
  }
 /* void Cat::move(){
    cout << "Move like " << name() << " the Cat" << endl;
  }*/
  void Cat::sound(){
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    cout << "Removing "<<  name() << " the Cat" <<endl;
  }
}