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
      data_[0] = 0;
      len_ = 0;
   }
   MyString::MyString(const char* str) {
      strcpy(data_, str);
      len_ = strlen(data_);
   }
   int MyString::operator~()const {
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
      strcat(data_, S.data_);
      len_ = strlen(data_);
      return *this;
   }

}