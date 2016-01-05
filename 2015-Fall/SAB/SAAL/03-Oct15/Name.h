#ifndef SICT_NAME_H_
#define SICT_NAME_H_
#include <iostream>
using namespace std;

namespace sict{
  class Name{
    char _name[41];
  public:
    Name();
    Name(const char* name);
    void display();
    void Set(const char* name);
    const char* get();
    void read();
  };



}



#endif