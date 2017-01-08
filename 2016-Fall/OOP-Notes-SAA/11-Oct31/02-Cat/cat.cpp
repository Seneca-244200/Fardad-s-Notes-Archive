#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"

namespace ict{

 
  Cat::Cat(const char* name, int numOfLives){
    _numOfLives = numOfLives;
    this->name(name);
    cout << "Creating "<< this->name()<<  " the Cat" << endl;
  }
  void Cat::act(){
     move();
     cout << "Act playful, " << name() <<" the Cat" << endl;
  }
  void Cat::sound(){
    cout << "Meow!" << endl;
  }
  Cat::~Cat(){
    cout << "Killing "<< name()<< " the Cat"<<endl;
  }
}