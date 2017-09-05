#include <cstring>
#include <iostream>
#include <iomanip>
#include "Mark.h"
using namespace std;
namespace sict{
  void Mark::allocate(int size){
    deallocate();
    _name = new char[size];
  }
  void Mark::deallocate(){
    delete[] _name;
    _name = (char*)0;
  }
  Mark::Mark(){
    _name = (char*)0;  // before anything follow the rule of setting non-used pointers to NULL
    setValue(0);
    setOutOf(0);
//    cout << "Defaulting" << endl;
  }
  Mark::Mark(const char* name, int value, int outOf){
    _name = (char*)0; // before anything follow the rule of setting non-used pointers to NULL
    setName(name);
    setValue(value);
    setOutOf(outOf);
 //   cout << "Create " << _name << endl;
  }
  Mark::Mark(const Mark& CM){
    _name = (char*)0;  // before anything follow the rule of setting non-used pointers to NULL
    operator=(CM);
   // *this = CM;  if you like to use the operator syntax instead of the function version
//    cout << "Copying " << CM._name << endl;
  }
  Mark::~Mark(){
//    cout << "Deleting " << _name << endl;
    deallocate();
  }

  Mark& Mark::operator=(const Mark& RO){
    if (this != &RO){
      deallocate();
      setName(RO._name);
      setValue(RO._value);
      setOutOf(RO._outOf);
//   cout << "assigning to " << _name << endl;
    }
    return *this;
  }
  void Mark::setValue(int value){
    _value = value;
  }
  void Mark::setOutOf(int outOf){
    _outOf = outOf;
  }
  void Mark::setName(const char* name){
    allocate(strlen(name) + 1);
    strcpy(_name, name);
  }
  const Mark& Mark::dspName()const{
    if (_name){
      cout << _name;
    }
    else{
      cout << "Unset Mark";
    }
    return *this;
  }


  const Mark& Mark::dspWMark()const{
    if (_outOf){
      cout << "%" << setprecision(0) << double(_value) / double(_outOf) * 100;
    }
    return *this;
  }
  const Mark& Mark::sp()const{
    cout << " ";
    return *this;
  }
  const Mark& Mark::nl()const{
    cout << endl;
    return *this;
  }
  ostream& Mark::display()const{
    dspName().sp().dspWMark();
    return cout;
  }

  Mark& Mark::add(const Mark& RO){
    _value += int(double(_outOf) / double(RO._outOf)*RO._value);
    return *this;
  }
  Mark& Mark::operator+=(const Mark& RO){
    _value += int(double(_outOf) / double(RO._outOf)*RO._value);
    return *this;
  }

  Mark sum(const Mark& LO, const Mark& RO){
    Mark S(LO);
    S += RO;
    return S;
  }
  Mark operator+(const Mark& LO, const Mark& RO){
    Mark S(LO);
    S += RO;
    return S;
  }

}