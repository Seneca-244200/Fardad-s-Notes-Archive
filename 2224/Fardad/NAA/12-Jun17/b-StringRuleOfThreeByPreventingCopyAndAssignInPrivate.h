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
      char* strcpy(char* des, const char* src)const;
      void AlCpy(const char* cstr);
      // The Rule Of three:
// creating three procedures to 
// take cake of the resource
// outside of the scope of the class
//1: copy constructor
      String(const String& toCopy) {};

      //2: copy assignment operator overload
      void operator=(const String& toAssing) {};
   public:
      String();
      String(const char* cstr);

      // queries:
      operator const char* ()const;
      operator int()const;
      operator unsigned int()const;
      operator bool()const;
      const char& operator[](int index)const;

      // IO
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);

      // modifiers
      String& delimiter(char value);
      char& operator[](int index);

      //3: destructor
      ~String();
   };
   std::ostream& operator<<(std::ostream& ostr, const String& ro);
   std::istream& operator>>(std::istream& istr, String& ro);

}
#endif // !SDDS_STRING_H


