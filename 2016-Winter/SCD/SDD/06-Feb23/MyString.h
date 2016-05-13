#ifndef SICT_MYSTRING_H_
#define SICT_MYSTRING_H_
#include <iostream>
// using namepsace std;  <------ wrong, you never use a namespace in a header file
namespace sict{
  class MyString{
    char data_[4096];  // this is just an example so we don't worry about
                       // stings being too long and overflowing....
  public:
    MyString(const char* str);
    MyString();
    ~MyString();

    MyString& set(const MyString& S);
    MyString& append(const MyString& S);

    MyString& set(const char* str);
    MyString& append(const char* str);

    MyString& addSpaceAfter();
    MyString& addSpaceBefore();

    int lenght()const;
    std::istream& read(std::istream& istr = std::cin);
    std::ostream& display(std::ostream& ostr = std::cout)const;
                                   // <---- qualify the type using the name 
                                  // of the namespace and a "::" (scope resolution) 
                                  // instead of using namespace in a header file

    MyString& operator=(const char* str);
    MyString& operator+=(const char* str);
    MyString& operator+=(const MyString& S);
    MyString& operator++();
    MyString& operator++(int);

  };


  std::ostream& operator<<(std::ostream& ostr, const MyString& S);
  std::istream& operator>>(std::istream& istr,  MyString& S);
}
#endif