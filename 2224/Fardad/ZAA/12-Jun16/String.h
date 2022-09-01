#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
namespace sdds {
   // todo test on linux with valgrind!!!
   const int CstrReadBufSize = 8;
   class String {
      char* m_data{}; // hold the cString inside the String class
      int m_length{};
      char m_delim = '\n';
      int strlen(const char* str)const;
      char* strcpy(char* des, const char* src, int len = -1)const;
      char* strcat(char* des, const char* src)const;
      void AlCpy(const char* cstr);
      void resize(int newsize);
      const char* strstr(const char* str, const char* find)const;
      int strcmp(const char* s1, const char* s2, int len)const;
   public:
      int strcmp(const char* s1, const char* s2)const;
      String();
      String(const char* cStr);

      // the rule of three 
      // (copy constructor, 
      //  copy assignment , 
      //  destructor f
      //  or any object with resources outside of their scope)
      
      // 1:
      String(const String& toCopy); // copy constructor (builds a new object)
      // 2:
      String& operator=(const String& toAssign); // copy assignment (overwrites an alreayd existing)
      // 3:
      ~String();  // one of the rule of three

      // modifiers
      String& delimiter(char val);
      String& operator~(); // empty the string
      char& operator[](int index);
      String& operator=(const char* cstr);
      String& operator++(int);
      String& operator++();
      String& operator+=(const String& ro);
      String& operator+=(const char* cstr);
      String operator+(const char* cstr)const;
      String operator+(const String& ro)const;

      bool operator>(const String& ro)const;
      bool operator<(const String& ro)const;
      bool operator>=(const String& ro)const;
      bool operator<=(const String& ro)const;
      bool operator==(const String& ro)const;
      bool operator!=(const String& ro)const;

      bool operator>(const char* cstr)const;
      bool operator<(const char* cstro)const;
      bool operator>=(const char* cstr)const;
      bool operator<=(const char* cstr)const;
      bool operator==(const char* cstr)const;
      bool operator!=(const char* cstr)const;


      // queries
      const char& operator[](int index) const;
      operator const char* ()const;
      operator int()const;
      operator unsigned int()const;
      operator bool()const;
      const char* contains(const String& cmp);
      const char* contains(const char* cstr);

      
      // IO
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
   std::ostream& operator<<(std::ostream& ostr, const String& S);
   std::istream& operator>>(std::istream& istr, String& S);
   String operator+(const char* lo, const String& ro);

   bool operator<(const char* cstr, const String& ro);
   bool operator>(const char* cstr, const String& ro);
   bool operator<=(const char* cstr, const String& ro);
   bool operator>=(const char* cstr, const String& ro);
   bool operator==(const char* cstr, const String& ro);
   bool operator!=(const char* cstr, const String& ro);
}
#endif // !SDDS_STRING_H



