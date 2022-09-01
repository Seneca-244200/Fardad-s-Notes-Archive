#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
namespace sdds {
   const int ReadBufSize = 1024;
   class String {
      char* m_data{};
      int m_length{};
      char m_delimiter{ '\n' };
      char m_junk{'J'};
      int strlen(const char* str)const;
      char* strcpy(char* des, const char* src, int len = -1)const;
      char* strcat(char* des, const char* src) const;
      void AlCpy(const char* cstr);
      String& resize(int newsize);
      const char* strstr(const char* str, const char* find)const;
   public:
      int strcmp(const char* s1, const char* s2, int len = -1)const;

      String();
      String(const char* cstr);

      // queries:
      operator const char* ()const;
      operator int()const;
      operator unsigned int()const;
      operator bool()const;
      const char& operator[](int index)const;
      const char* contains(const String& cmp);
      const char* contains(const char* cstr);

      // IO
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);

      // modifiers
      String& delimiter(char value);
      char& operator[](int index);
      String& operator+=(const char* cstr);

      String& operator+=(const String& S);

      // binary oper with no sideeffect
      String operator+(const char* str)const;
      String operator+(const String& S)const;

      // The Rule Of three:
      // creating three procedures to 
      // take cake of the resource
      // outside of the scope of the class
      //1: copy constructor
      String(const String& toCopy) ;

      //2: copy assignment operator overload
      String& operator=(const String& toAssing) ;

      //3: destructor
      ~String();
      // comperison
      bool operator>(const String& ro)const;
      bool operator<=(const String& ro)const;
      bool operator<(const String& ro)const;
      bool operator>=(const String& ro)const;
      bool operator==(const String& ro)const;
      bool operator!=(const String& ro)const;
      bool operator>(const char* cstr)const;
      bool operator<(const char* cstro)const;
      bool operator>=(const char* cstr)const;
      bool operator<=(const char* cstr)const;
      bool operator==(const char* cstr)const;
      bool operator!=(const char* cstr)const;

      // bad bad way!!!!! don't do this, use the way is done for others.
      friend bool operator>(const char* leftOperand, const String& rigtoperand);

   };
   std::ostream& operator<<(std::ostream& ostr, const String& ro);
   std::istream& operator>>(std::istream& istr, String& ro);
   String operator+(const char* leftOperand, const String& rightOperand);

   bool operator>(const char* leftOperand, const String& rigtoperand);

   bool operator<(const char* cstr, const String& ro);
   bool operator<=(const char* cstr, const String& ro);
   bool operator>=(const char* cstr, const String& ro);
   bool operator==(const char* cstr, const String& ro);
   bool operator!=(const char* cstr, const String& ro);



}
#endif // !SDDS_STRING_H


