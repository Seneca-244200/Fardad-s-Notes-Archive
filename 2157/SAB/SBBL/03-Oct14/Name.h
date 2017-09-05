#ifndef SICT_NAME_H_
#define SICT_NAME_H_

namespace sict{
  class Name{
    char* _name;
  public:
    Name();
    Name(const char* name);
    Name(const Name& N);
    ~Name();
    Name& operator=(const Name& N);
    ostream& display();
    void Set(const char* name);
    const char* get();
  };



}



#endif