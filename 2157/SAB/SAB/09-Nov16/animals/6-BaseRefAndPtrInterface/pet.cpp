#include <iostream>
#include <cstring>
using namespace std;
#include "pet.h"

namespace sict{




  Pet::Pet(const char* name){
    this->name(name);
    cout << "Creating " << _name << " the Pet" << endl;
  }
  const char* Pet::name()const{
    return _name;
  }
  void Pet::name(const char* value){
    strncpy(_name, value, 40);
    _name[40] = char(0);
  }
  void Pet::move(){
    cout << "Move like Pet" << endl;
  }
  void Pet::sound(){
    cout << "Sound like Pet" << endl;
  }
  Pet::~Pet(){
     cout << "Remove " << _name<< " the Pet" <<endl;
  }
}