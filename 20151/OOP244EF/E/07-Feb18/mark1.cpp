#include "mark1.h"
#include <new>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;
namespace oop244{

  Mark::Mark(const char* subName, const char subCode[],
    int value, int outOf){
    this->subName = NULLNAMEPTR; // before anything follow the rule of setting non-used pointers to NULL
    setSubName(subName);
    setSubCode(subCode);
    setValue(value);
    setOutOf(outOf);
  }
  Mark::Mark(){
    this->subName = NULLNAMEPTR;  // before anything follow the rule of setting non-used pointers to NULL
    setSubCode("");
    setValue(0);
    setOutOf(0);
  }
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
  void Mark::setValue(int value){
    this->value = value;
  }
  void Mark::setOutOf(int outOf){
    this->outOf = outOf;
  }
  void Mark::setSubName(const char* subName){
    if (allocate(strlen(subName) + 1)){
      strcpy(this->subName, subName);
    }
  }
  void Mark::setSubCode(const char subCode[]){
    strncpy(this->subCode, subCode, 8);
    this->subCode[8] = 0; // in case subCode is not not null terminated
  }
  void Mark::dspSubCode()const{
    cout << subCode;
  }
  void Mark::dspWMark()const{
    if (outOf){
      cout << "%" << setprecision(0) << double(value) / double(outOf) * 100;
    }
  }
  void Mark::dspSubName()const{
    if (subName){
      cout << subName;
    }
    else{
      cout << "Unset Mark";
    }
  }
  void Mark::space()const{
    cout << " ";
  }
  void Mark::nl()const{
    cout << endl;
  }
  Mark::~Mark(){
    deallocate();
  }

}