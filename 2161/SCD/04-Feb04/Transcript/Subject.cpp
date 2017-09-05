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
  Subject::Subject(const char* code, const char* name
                  , int mark, int outOf){
    strncpy(code_, code, 6);
    code_[6] = 0;
    name_ = new char[strlen(name) + 1];
    strcpy(name_, name);



}