#include <cstring>
#include "Container.h"
//using namespace std;
void Container::setContainer(){
  setContainer(0.0, 5.0);
}
void Container::setContainer(double value){
  setContainer(value, 5.0);
}
void Container::setContainer(double value, double volume){
  _volume = volume;
  _value = value;
}
void Container::name(const char value[]){
  std::strcpy(_name, value);
}