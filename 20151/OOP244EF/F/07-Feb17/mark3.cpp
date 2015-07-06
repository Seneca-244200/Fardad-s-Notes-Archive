#include "mark3.h"
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
    if (&CM != this){
      this->subName = NULLNAMEPTR;  // before anything follow the rule of setting non-used pointers to NULL
      setSubName(CM.subName);
      setSubCode(CM.subCode);
      setValue(CM.value);
      setOutOf(CM.outOf);
    }
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
  Mark Mark::dspSubCode()const{
    cout << subCode;
    return *this;
  }
  Mark Mark::dspWMark()const{
    if (outOf){
      cout << "%" << setprecision(0) << double(value) / double(outOf) * 100;
    }
    return *this;
  }
  Mark Mark::dspSubName()const{
    if (subName){
      cout << subName;
    }
    else{
      cout << "Unset Mark";
    }
    return *this;
  }
  Mark Mark::space()const{
    cout << " ";
    return *this;
  }
  Mark Mark::nl()const{
    cout << endl;
    return *this;
  }
  Mark::~Mark(){
    deallocate();
  }
}