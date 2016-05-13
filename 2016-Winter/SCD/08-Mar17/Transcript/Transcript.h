#include "Mark.h"
#include "Subject.h"
#include <iostream>
namespace sict{
  class Transcript{
    Mark gpa_;
    char* stName_;
    Subject* subs_;
    int stno_;
  public:
    Transcript(const char* stname, int stno);
    void add(const Subject& sub);
    Subject& subject(int index);
    Subject& subject(const char* code);
    std::ostream& display(std::ostream& os)const;
    virtual ~Transcript();
  };
  std::ostream& operator<<(std::ostream& os, const Transcript& T);


}