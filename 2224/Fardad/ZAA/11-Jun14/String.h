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
      char* strcpy(char* des, const char* src)const;
      void AlCpy(const char* cstr);
   public:
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

      // queries
      const char& operator[](int index) const;
      operator const char* ()const;
      operator int()const;
      operator unsigned int()const;
      operator bool()const;
      
      // IO
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
   std::ostream& operator<<(std::ostream& ostr, const String& S);
   std::istream& operator>>(std::istream& istr, String& S);
}
#endif // !SDDS_STRING_H



