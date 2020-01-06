#ifndef SDDS_STRING_H__
#define SDDS_STRING_H__
#include <iostream>
namespace sdds {
   class String {
      int m_length;
      char* m_data;
      void allocateAndCopy(const char* cString);
   public:
      String();
      String(const char* cString);
      String(const String& S);
      ~String();
      String& operator=(const char* cString);
      String& operator=(const String& S);
      String& operator+=(const char* str);
      std::ostream& display()const;
      int length()const;
      const char* cString()const;
   };
}


#endif // !SDDS_STRING_H__
