#include <cstring>
#include <iostream>
#include <iomanip>
#include "Mark.h"
using namespace std;
//#define DEBUG
namespace sict{
  Mark::Mark(){
    _name = (char*)0;
    setValue(0);
    setOutOf(0);
#ifdef DEBUG
    cout << "default" << endl;
#endif
  }
  void Mark::setValue(int value){
    _value = value;
  }
  void Mark::setOutOf(int outOf){
    _outOf = outOf;
  }
  void Mark::setName(const char* name){
    allocMem(strlen(name) + 1);
    strcpy(_name, name);
  }
  void Mark::allocMem(int size){
    deallocate();
    _name = new char[size];
  }
  void Mark::deallocate(){
    delete[] _name;
    _name = (char*)0;
  }
  Mark::Mark(const char* name,
    int value, int outOf){
    _name = (char*)0;
    setName(name);
    setValue(value);
    setOutOf(outOf);
#ifdef DEBUG
    cout << "craeting " <<_name << endl;
#endif
  }
  Mark::Mark(const Mark& C){
    _name = (char*)0;
    setName(C._name);
    setValue(C._value);
    setOutOf(C._outOf);
#ifdef DEBUG
    cout << "copying " << _name << endl;
#endif
  }
  //void Mark::set(const Mark& C){
  //  setName(C._name);
  //  setValue(C._value);
  //  setOutOf(C._outOf);
  //}
  Mark& Mark::operator=(const Mark& C){
    if (&C != this){
      setName(C._name);
      setValue(C._value);
      setOutOf(C._outOf);
    }
    return *this;
  }
  Mark& Mark::operator++(){
    ++_value;
    return *this;
  }
  Mark& Mark::operator++(int){
    ++_value;
    return *this;
  }
  void Mark::display()const{
    dspName();
    cout << " ";
    dspMark();
  }
  void Mark::dspName()const{
    if (_name){
      cout << _name;
    }
    else {
      cout << "Unset Mark";
    }
  }
  void Mark::dspMark()const{
    if (_outOf){
      cout << "%" << setprecision(0) << fixed 
        << double(_value) / double(_outOf) * 100;
    }
  }
  Mark::~Mark(){
#ifdef DEBUG
    cout << "distroying " <<_name<< endl;
#endif
    deallocate();
  }

  ostream& operator<<(ostream& os,
                      const Mark& M){
    M.display();
    return os;
  }



}

