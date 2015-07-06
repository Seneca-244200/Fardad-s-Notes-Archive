#include <cstring>
#include <iostream>
using namespace std;
class Pet {
  char _name[41];
public:
  Pet(const char* name = ""){
    strcpy(_name, name);
  }
  const char* name(){
    return _name;
  }
  virtual void speak() = 0;
  virtual ~Pet(){}
};
class Dog : public Pet{
  char _sound[21];
public:
  Dog(const char* name, const char* sound) :Pet(name){
    strcpy(_sound, sound);
  }
  void speak(){
    cout << _sound;
  }
};
