#ifndef ICT_MYSTRING_H__
#define ICT_MYSTRING_H__
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
      int operator~()const;
      int length()const;
      void print()const;
   };
}
#endif