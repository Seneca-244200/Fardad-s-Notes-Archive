#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
#include "Subject.h"

namespace sict{
  Subject::Subject():name_(nullptr), mark_(80){
    code_[0] = 0;
    //name_ = nullptr;
  }
  Subject::Subject(const char* theCode, const char* name
    , int mark, int outOf){

    code(theCode);
    name_ = new char[strlen(name) + 1];
    strcpy(name_, name);
    mark_.totalMark(mark).outOf(outOf);
  }
  Subject::Subject(const Subject& S){
    if (!S.isEmpty()){
      code(S.code_);
      name_ = new char[strlen(S.name_) + 1];
      strcpy(name_, S.name_);
      mark_ = S.mark_;
    }
    else{
      code_[0] = 0;
      name_ = nullptr;
    }

  }
  Subject& Subject::operator=(const Subject& S){
    delete[] name_;
    if (!S.isEmpty()){
      code(S.code_);
      name_ = new char[strlen(S.name_) + 1];
      strcpy(name_, S.name_);
      mark_ = S.mark_;
    }
    else{
      code_[0] = 0;
      name_ = nullptr;
    }
    return *this;
  }
  Subject::~Subject(){
    delete[] name_;
  }
  const char* Subject::name()const{
    return name_;
  }
  void Subject::name(const char* value){
    delete[] name_;
    name_ = new char[strlen(value) + 1];
    strcpy(name_, value);
  }
  void Subject::code(const char* value){
    strncpy(code_, value, 6);
    code_[6] = 0;
  }
  const char* Subject::code()const{
    return code_;
  }
  void Subject::mark(int value, int outOf){
    mark_.totalMark(value);
    mark_.outOf(outOf);
  }
  void Subject::mark(const Mark& value){
    mark_ = value;
  }
  const Mark& Subject::mark()const{
    return mark_;
  }
  void Subject::display(){
    cout << code_ << ": " << left << setfill('.') << setw(65) << name_ << "  ";
    mark_.display(DSP_GRADE);
    cout << endl;
  }
  Subject::operator int()const{
    return mark_.totalMark();
  }
  bool Subject::isEmpty()const{
    return name_ == nullptr;
/*    if (name_ == nullptr){
      return true;
    }
    else{
      return false;
    } */
  }

}