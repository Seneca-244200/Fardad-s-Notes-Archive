#include "mark.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <new>
using namespace std;
namespace oop244{
  bool Mark::allocate(int size){
    deallocate();
    subName = new (nothrow) char[size];
    return subName != NULLNAMEPTR;
  }
  void Mark::deallocate(){
    if (subName){
      delete[] subName;
      subName = NULLNAMEPTR;
    }
  }
  Mark::Mark(const char* subName, const char subCode[],
             int value, int outOf){
    this->subName = NULLNAMEPTR;
    setSubName(subName);
    setSubCode(subCode);
    setValue(value);
    setOutOf(outOf);
  }
  Mark::Mark(const Mark& CM){
    this->subName = NULLNAMEPTR;
    setSubName(CM.subName);
    setSubCode(CM.subCode);
    setValue(CM.value);
    setOutOf(CM.outOf);
  }
  Mark::Mark(){
    this->subName = NULLNAMEPTR;
    setSubCode("");
    setValue(0);
    setOutOf(0);
  }
  void Mark::setValue(int value){
    this->value = value;
  }
  void Mark::setOutOf(int outOf){
    this->outOf = outOf;
  }
  void Mark::setSubCode(const char subCode[]){
    strncpy(this->subCode, subCode, 8);
    this->subCode[8] = char(0); // in case subCode is not not null terminated
  }
  void Mark::setSubName(const char* subName){
    if (allocate(strlen(subName) + 1)){
      strcpy(this->subName, subName);
    }
  }
  const Mark& Mark::dspWMark()const{
    if (outOf){
      cout << "%" << setprecision(0) << double(value) / double(outOf) * 100;
    }
    return *this;
  }
  const Mark& Mark::dspSubCode()const{
    cout << subCode;
    return *this;
  }
  const Mark& Mark::dspSubName()const{
    if (subName){
      cout << subName;
    }
    else{
      cout << "Unset Mark";
    }
    return *this;
  }
  const Mark& Mark::space()const{
    cout << " ";
    return *this;
  }
  const Mark& Mark::nl()const{
    cout << endl;
    return *this;
  }
  void Mark::display()const{
    dspSubName().space().dspSubCode().space().dspWMark().nl();
  }

  Mark& Mark::operator++(){
    value++;
    return *this;
  }
  Mark& Mark::operator+(const Mark& Rop)const{
    Mark res;
    res.setSubName(Rop.setSubName);
    res.setSubCode(Rop.subCode);
    res.setValue(value +int(double(outOf) / double(Rop.outOf) * Rop.value));
    res.setOutOf(int(double(outOf) / double(Rop.outOf) * 100);
    return res;
  }
  Mark::~Mark(){
    deallocate();
  }
}