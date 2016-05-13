#ifndef SICT_SUBJECT_H_
#define SICT_SUBJECT_H_
#include "Mark.h"
namespace sict{
  class Subject{
  private:
    char code_[7];
    char* name_;
    Mark mark_;
  public:
    Subject();
    Subject(const char* code, const char* name
            , int mark, int outOf = 100);
  };



}

#endif
