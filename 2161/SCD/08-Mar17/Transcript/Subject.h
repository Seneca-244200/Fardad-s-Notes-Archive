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



  /*  Subject(const Subject& S) = delete;
    Subject& operator=(const Subject& S) = delete;*/
    Subject(const Subject& S);
    Subject& operator=(const Subject& S);


    ~Subject();
    bool isEmpty()const;
    void name(const char* value);
    const char* name()const;
    void code(const char* value);
    const char* code()const;
    void mark(int value, int outOf = 100);
    void mark(const Mark& value);
    const Mark& mark()const;
    void display();

    operator int()const;

  };



}

#endif
