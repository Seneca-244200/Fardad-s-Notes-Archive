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
  ostream& MyString::display(ostream& ostr)const{
    ostr << data_;
    return ostr;
  }
  istream& MyString::read(istream& istr){
    return istr.getline(data_, 4096, '\n');
  }


  MyString&  MyString::operator=(const char* str){
   return  set(str);
   // return *this;
  }
  MyString&  MyString::operator+=(const char* str){
    return append(str);
  }
  MyString&  MyString::operator+=(const MyString& S){
    return append(S);
  }
  MyString& MyString::operator++(){
    return addSpaceBefore();
  }
  MyString& MyString::operator++(int){
    return addSpaceAfter();
  }
  ostream& operator<<(ostream& ostr, const MyString& S){
    return S.display(ostr);
  }
  istream& operator>>(istream& istr, MyString& S){
    return S.read(istr);
  }

}