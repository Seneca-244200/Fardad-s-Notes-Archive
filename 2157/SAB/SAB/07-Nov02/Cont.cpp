#include "Cont.h"
Container::Container(){
  _data = -1;
#ifdef DEBUG
  cout << "defaulting" << endl;
#endif
}
Container::Container(int data){
  _data = data;
#ifdef DEBUG
  cout << "Constructing with " << _data << endl;
#endif
}
Container::Container(const Container& C){
  _data = C._data;
#ifdef DEBUG
  cout << "Copy Constructing with " << _data << endl;
#endif
}
Container& Container::operator=(const Container& C){
  if (this != &C){
    _data = C._data;
#ifdef DEBUG
    cout << "Setting to " << _data << endl;
#endif
  }
  return *this;
}
Container::~Container(){
#ifdef DEBUG
  cout << "Removing Container holding " << _data << endl;
#endif
}
int Container::data()const{
  return _data;
}
Container Container::operator+(int value)const{
  Container sum(_data + value);
  return sum;
}
Container& Container::operator+=(int value){
  _data += value;
  return *this;
}
void Container::display()const{
  cout << "_data:" << _data << endl;
}


Container& Container::operator++(){
  _data++;
  return *this;
}
Container Container::operator++(int){
  Container keep(*this);
  _data++;
  return keep;
}

Container operator-(const Container& C, int value){
  Container sum(C._data + value);
  return sum;
}

int operator-(int value, const Container& C){
  return value - C.data();
}