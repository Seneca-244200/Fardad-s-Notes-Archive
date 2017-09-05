#include <iostream>
#include <cstring>
using namespace std;
#include "pet.h"

namespace sict{

  void prn(const char* m1, const char* m2, const char* m3, const char* m4){
    cout << m1 << m2 << m3 << m4 << endl;
  }


  Pet::Pet(const char* name){
    this->name(name);
    prn("Creating ", _name, " the Pet");
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
    prn("Killing ", _name, " the Pet");
  }
}