#include <iostream>
#include <cstring>
using namespace std;
#include "animal.h"

namespace sict{

  void prn(const char* m1, const char* m2, const char* m3, const char* m4){
    cout << m1 << m2 << m3 << m4 << endl;
  }


  Animal::Animal(const char* name){
    this->name(name);
    prn("Creating ", _name, " the Animal");
  }
  const char* Animal::name()const{
    return _name;
  }
  void Animal::name(const char* value){
    strncpy(_name, value, 40);
    _name[40] = char(0);
  }
  void Animal::move(){
    cout << "Move like animal" << endl;
  }
  void Animal::sound(){
    cout << "Sound like animal" << endl;
  }
  Animal::~Animal(){
    prn("Killing ", _name, " the animal");
  }
}