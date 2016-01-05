#ifndef __FS_MYSTRING_H__
#define __FS_MYSTRING_H__
namespace oop244{
  class MyString{
  private:
    char* _data;
    int _len;
    bool allocate(int size);
    void deallocate();
    void copy(const MyString& S);
  public:
    MyString();
    MyString(const char* cstr);
    MyString(const MyString& S);
    MyString& set(const char* cstr);
    MyString& operator=(const MyString& S);
    ~MyString();
    int length()const;
    const char* getCString()const;
    MyString& operator++(int);  // post fix
    MyString& operator++();   // prefix
  };
}
#endif