#include <iostream>
#include <cstring>
using namespace std;
#include "Name.h"
namespace sict{
  Name::Name(){
    _name = (char*)0; // same as _name = nullptr
  }
  Name::Name(const char* name){
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
  }  
  Name::Name(const Name& N){
    _name = new char[strlen(N._name) + 1];
    strcpy(_name, N._name);
  }
  Name& Name::operator=(const Name& N){
    if (this != &N){ // to prevent self assigning 
      delete[] _name;
      _name = new char[strlen(N._name) + 1];
      strcpy(_name, N._name);
    }
    return *this;
  }
  Name::~Name(){
 //   cout << (_name ? _name : "No Name") << " is dying!" << endl;
    delete[] _name;
  }
  ostream& Name::display(){
    if (_name != (char*)0){
      cout << _name;
    }
    return cout;
  }
  void Name::Set(const char* name){
    delete[] _name;
    _name = new char[strlen(name) + 1];
    strcpy(_name, _name);
  }
  const char* Name::get(){
    return _name;
  }

}