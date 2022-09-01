#ifndef SDDS_STRING_H
#define SDDS_STRING_H
#include <iostream>
namespace sdds {
   const int ReadBufSize = 8;
   class String {
      char* m_data{};
      int m_length{};
      char m_delimiter{ '\n' };
      int strlen(const char* str)const;
      char* strcpy(char* des, const char* src)const;
      void AlCpy(const char* cstr);
   public:
      String();
      String(const char* cstr);
      //Queries:
      operator const char* ()const;
      operator int()const;
      operator unsigned int()const;
      operator bool()const;
      const char& operator[](int index)const;

      // IO
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);

      // modifier
      void operator~();
      char& operator[](int index);
      String& delimiter(char delim);

      // the rule of three 
     // (copy constructor, 
     //  copy assignment , 
     //  destructor f
     //  or any object with resources outside of their scope)

      // Rule of three
      //
      //1:
      String(const String& toCopy);
      //2:
      String& operator=(const String& toAssing);
      //3: create a destructor
      ~String();
   };
   std::ostream& operator<<(std::ostream& ostr, const String& ro);
   std::istream& operator>>(std::istream& istr,String& ro);
}
#endif // !SDDS_STRING_H



