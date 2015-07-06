#include "mark.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <new>
using namespace std;
namespace oop244{
  void Mark::allocate(int size){
    deallocate();
    subName = new (nothrow) char[size];
  }
  void Mark::deallocate(){
    if (subName){
      delete[] subName;
      subName = NULLNAMEPTR;
    }
  }

  Mark::Mark(const char* subName, const char subCode[], int value, int outOf){
    this->subName = NULLNAMEPTR;  // before anything follow the rule of setting non-used pointers to NULL
    setSubName(subName);
    setSubCode(subCode);
    setValue(value);
    setOutOf(outOf);
  }
  Mark::Mark(const Mark& CM){
    this->subName = NULLNAMEPTR;  // before anything follow the rule of setting non-used pointers to NULL
    setSubName(CM.subName);
    setSubCode(CM.subCode);
    setValue(CM.value);
    setOutOf(CM.outOf);
  }

  Mark::Mark(){
    this->subName = NULLNAMEPTR;  // before anything follow the rule of setting non-used pointers to NULL
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
  void Mark::setSubName(const char* subName){
    allocate(strlen(subName) + 1);
    strcpy(this->subName, subName);
  }
  void Mark::setSubCode(const char subCode[]){
    strncpy(this->subCode, subCode, 8);
    this->subCode[8] = 0; // in case subCode is not not null terminated
  }
  Mark& Mark::add(const Mark& AM){
    value += int(double(outOf) / double(AM.outOf)*AM.value);
    return *this;
  }

  const Mark& Mark::dspSubCode()const{
    cout << subCode;
    return *this;
  }
  const Mark& Mark::dspWMark()const{
    if (outOf){
      cout << "%" << setprecision(0) << double(value) / double(outOf) * 100;
    }
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

  Mark Mark::operator+(const Mark& Rop)const{
    Mark sum = *this;
    sum.setValue(sum.value + int(double(sum.outOf) / double(Rop.outOf) * Rop.value));
    return sum;
  }

  Mark& Mark::operator=(const Mark& Rop){
    if (this != &Rop){
      setSubName(Rop.subName);
      setSubCode(Rop.subCode);
      setValue(Rop.value);
      setOutOf(Rop.outOf);
    }
    return *this;
  }
  int Mark::operator=(int value){
    setValue(value);
    return value;
  }
  Mark& Mark::operator=(const char* subName){
    setSubName(subName);
    return *this;
  }

  Mark& Mark::operator++(){
    value++;
    return *this;
  }
  Mark Mark::operator++(int){ // only for postfix ++ and --
    Mark original = *this;
    value++;
    return original;
  }
  Mark Mark::operator-(){
    Mark neg = *this;
    neg.setValue(-value);
    return neg;
  }

  void Mark::display()const{
    dspSubName().space().dspSubCode().space().dspWMark();
  }
  Mark::~Mark(){
    deallocate();
  }
  // Non-memeber ovarload for (-) operator
  Mark operator-(const Mark& Lop, const Mark& Rop){
    Mark res = Lop;
    res.setValue(Lop.value - int(double(Lop.outOf) / double(Rop.outOf) * Rop.value));
    return res;
  }
  // overlaoding operator<< to print Mark with cout
  ostream& operator<<(ostream& os, const Mark& Rop){
    Rop.display();
    return os;
  }

}