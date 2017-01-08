#ifndef ICT_MYSTRING_H__
#define ICT_MYSTRING_H__
#include <iostream>
using namespace std;
namespace ict{
   class MyString{
   private:
      char* data_;
      int len_;
      // utility
      int strlen(const char* str)const;
      void strcpy(char* des, const char* src)const;
      void strcat(char* des, const char* src)const;
      int strcmp(const char* left, const char* right)const;
      void copy(const MyString& S);
   public:
      MyString();
      MyString(const char* str);
      MyString(const MyString& S);
      MyString& operator=(const MyString& S);
      ~MyString();
      const char* getCstring()const;
      bool operator>(const MyString& S)const;
      bool operator==(const MyString& S)const;
      MyString& operator+=(const MyString& S);
      int length()const;
      void set(const char* str);
      ostream& print(ostream& os)const;
      istream& read(istream& is);
   };

   ostream& operator<<(ostream& os, const MyString& S);
   istream& operator >> (istream& is, MyString& S);

/*
AType A;
BType B;
Ctype C;
 A = B @ C;
 AType operator@(BType x, CType y){
   AType res;
   res = somehow do the @ operator between x and y 
   return res;
 }
*/

}
#endif