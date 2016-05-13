#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
#include "Subject.h"

namespace sict{
  Subject::Subject(){
    code_[0] = 0;
    name_ = nullptr;
  }
  Subject::Subject(const char* theCode, const char* name
    , int mark, int outOf){
    //strncpy(code_, theCode, 6);
    //code_[6] = 0;
    code(theCode);
    name_ = new char[strlen(name) + 1];
    strcpy(name_, name);
    mark_.totalMark(mark).outOf(outOf);
  }
  Subject::~Subject(){
    delete[] name_;
    name_ = nullptr; // no need because it is about to die.
  }
  const char* Subject::name()const{
    return name_;
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