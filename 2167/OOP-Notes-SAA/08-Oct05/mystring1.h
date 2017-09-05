#ifndef ICT_MYSTRING_H__
#define ICT_MYSTRING_H__
namespace ict{
   class MyString{
   private:
      char data_[10240];
      int len_;
      // utility
      int strlen(const char* str)const;
      void strcpy(char* des, const char* src)const;
      void strcat(char* des, const char* src)const;
      int strcmp(const char* left, const char* right)const;
   public:
      MyString();
      MyString(const char* str);
      const char* getCstring()const;
      bool isGreater(const MyString& S);
      bool equal(const MyString& S);
      MyString& concat(const MyString& S);
      int length()const;
   };
}
#endif