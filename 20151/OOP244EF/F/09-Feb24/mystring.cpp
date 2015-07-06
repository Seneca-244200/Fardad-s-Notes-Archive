#include "mystring.h"
#include <cstring>
#include <new>
using namespace std;
namespace oop244{
  bool  MyString::allocate(int size){
    deallocate();
    _data = new (nothrow) char[size];
    return _data != (char*)0;
  }
  void  MyString::deallocate(){
    if (_data){
      delete[] _data;
      _data = (char*)0;
    }
  }
  MyString::MyString(){
    _data = (char*)0;
    if (allocate(1)){
      _data[0] = char(0);
      _len = 0;
    }
    else{
      _len = -1;
    }
  }
  MyString::MyString(const char* cstr){
    _data = (char*)0;
    set(cstr);
  }
  MyString& MyString::set(const char* cstr){
    if (allocate((_len = strlen(cstr)) + 1)){
      strcpy(_data, cstr);
      // _len = strlen(cstr);
    }
    else{
      _len = -1;
    }
    return *this;
  }
  void MyString::copy(const MyString& S){
    _len = S._len;
    if (S._data && allocate(_len + 1)){
      strcpy(_data, S._data);
    }
    else{
      _len = -1;
    }
  }

  MyString::MyString(const MyString& S){
    _data = (char*)0;
    copy(S);
  }

  MyString& MyString::operator=(const MyString& S){
    if (this != &S){
      copy(S);
    }
    return *this;
  }



  MyString::~MyString(){
    deallocate();
  }
  int MyString::length()const{
    return _len;
  }
  const char* MyString::getCString()const{
    return _data;
  }
  MyString& MyString::operator++(int){ // post fix
    if (_data){
      char* temp = new (nothrow) char[_len + 2];
      if (temp){   // resize and etc....
        strcpy(temp, _data);
        strcat(temp, " ");
        delete[] _data;
        _data = temp;
        _len++;
      }
    }
    return *this;
  }
  MyString& MyString::operator++(){   // prefix
    return *this;
  }

}