#include <iostream>
using namespace std;
#include "mystring.h"

namespace ict{
   int MyString::strlen(const char* str)const {
      int len = -1;
      while (str[++len]);
      return len;
   }
   void MyString::strcpy(char* des, const char* src)const {
      while (*des++ = *src++);
   }
   void MyString::strcat(char* des, const char* src)const {
      int len = strlen(des);
      while (*(des++ + len) = *src++);
   }
   int MyString::strcmp(const char* left, const char* right)const {
      int i = 0;
      for (i = 0;right[i] && left[i] && left[i] == right[i]; i++);
      return left[i] - right[i];
   }
   /*========================*/
   MyString::MyString() {
    //  data_ = (char*)0;
      data_ = nullptr;
      len_ = 0;
   }
   MyString::MyString(const char* str) {
      data_ = new char[strlen(str)+1];
      strcpy(data_, str);
      len_ = strlen(data_);
   }
   MyString::~MyString() {
      delete[] data_;
   }
   void MyString::copy(const MyString& S) {
      if (S.data_) {
         data_ = new char[S.length() + 1];
         strcpy(data_, S.data_);
         len_ = S.length();
      }
      else {
         len_ = 0;
         data_ = nullptr;
      }
   }
   MyString::MyString(const MyString& S) {
      copy(S);
   }
   MyString& MyString::operator=(const MyString& S) {
      if (this != &S) {
         delete[] data_;
         copy(S);
      }
      return *this;
   }
   int MyString::length()const {
      return len_;
   }

   const char* MyString::getCstring()const {
      return data_;
   }
   bool MyString::operator>(const MyString& S)const {
      return strcmp(data_, S.data_) > 0;
   }
   bool MyString::operator==(const MyString& S)const {
      return strcmp(data_, S.data_) == 0;
   }
   MyString& MyString::operator+=(const MyString& S){
      char* temp = new char[length() + S.length() + 1];
      if (data_) {
         strcpy(temp, data_);
      }
      else {
         temp[0] = '\0';
      }
      if (S.data_) {
         strcat(temp, S.data_);
      }
      len_ += S.length();
      delete[] data_;
      data_ = temp;
      return *this;
   }
   ostream& MyString::print(ostream& os)const {
      if (data_) {
         os << data_;
      }
      return os;
   }
   istream& MyString::read(istream& is) {
      char str[1024];
      is >> str;
   //   *this = str; 
      set(str);
      return is;
   }
   void MyString::set(const char* str) {
      delete[] data_;
      if (str) {
         data_ = new char[strlen(str) + 1];
         strcpy(data_, str);
         len_ = strlen(str);
      }
      else {
         len_ = 0;
         data_ = nullptr;
      }
   }
   ostream& operator<<(ostream& os, const MyString& S) {
      return S.print(os);
   }
   istream& operator >> (istream& is, MyString& S) {
      return S.read(is);
   }
}