#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace sdds{

 
  Cat::Cat(const char* name, int numOfLives):Pet(name){
    _numOfLives = numOfLives;
    cerr << "Creating " <<  this->name() <<  " the Cat" << endl;
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
    cerr << "Remove " <<  name() << " the Cat" << endl;
  }
}