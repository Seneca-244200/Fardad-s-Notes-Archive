#include <iostream>
#include <cstring>
using namespace std;
#include "Name.h"
namespace sict{
  Name::Name(){
    _name[0] = 0;
  }
  Name::Name(const char* name){
    strncpy(_name, name,40);
    _name[40] = 0;
  }  
   void Name::display(){
    if (_name != (char*)0){
      cout << _name;
    }
  }
  void Name::Set(const char* name){
    strncpy(_name, name, 40);
    _name[40] = 0;
  }
  const char* Name::get(){
    return _name;
  }
  void Name::read(){
    cin.get(_name, 41, '\n');
    cin.ignore(1000, '\n');
  }
}