#include <cstring>
#include <iostream>
using namespace std;
#include "MyString.h"

namespace sict{
  MyString::MyString(const char* str){
    set(str);
  }
  MyString::MyString(){
    data_[0] = 0; // = '\0';
  }
  MyString::~MyString(){
    // does nothing for now
   // cout << data_ << " is dead!" << endl;
  }

  MyString& MyString::set(const MyString& S){
    strcpy(data_, S.data_);
    return *this;
  }
  MyString& MyString::append(const MyString& S){
    strcat(data_, S.data_);
    return *this;
  }


  MyString& MyString::set(const char* str){
    strcpy(data_, str);
    return *this;
  }
  MyString& MyString::append(const char* str){
    strcat(data_, str);
    return *this;
  }
  MyString& MyString::addSpaceAfter(){
    strcat(data_, " ");
    return *this;
  }
  MyString& MyString::addSpaceBefore(){
    char temp[4096];
    strcpy(temp, " ");
    strcat(temp, data_);
    strcpy(data_, temp);
    return *this;
  }
  int MyString::lenght()const{
    return strlen(data_);
  }
  ostream& MyString::display()const{
    cout << data_;
    return cout;
  }


  void MyString::operator=(const char* str){
    set(str);
  }
  void MyString::operator+=(const char* str){
    append(str);
  }
  void MyString::operator+=(const MyString& S){
    append(S);
  }


}