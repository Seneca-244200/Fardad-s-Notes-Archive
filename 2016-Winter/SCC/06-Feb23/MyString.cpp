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
    return cout;
  }


  MyString& MyString::operator=(const char* str){
    return set(str);
  }
  MyString& MyString::operator+=(const char* str){
    return append(str);
  }
  MyString& MyString::operator+=(const MyString& S){
    return append(S);
  }
  MyString MyString::operator+(const MyString&RO)const{
      MyString res(data_);
      res += RO;
      return res;
  }
  MyString& MyString::operator++(){
    addSpaceBefore();
    return *this;
  }
  MyString& MyString::operator++(int){
    addSpaceAfter();
    return *this;
  }
  char& MyString::operator[](int index){
    return data_[index % STR_MAX_LEN];
  }

  //MyString operator+(const MyString& lo, const MyString& ro){
  //  MyString res(lo.data_);
  //  res += ro;
  //  return res;
  //}
  ostream& operator<<(ostream& ostr, const MyString& RO){
    return RO.display(ostr);
  }
}