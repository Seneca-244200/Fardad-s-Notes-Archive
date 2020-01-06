#ifndef SDDS_STRING_H__
#define SDDS_STRING_H__
#include <iostream>
namespace sdds {
   class String {
      char* m_data;
      int m_size;
      void allocateAndCopy(const char* cString);
   public:
      String();
      String(const char* cString);
      String(const String& StringToBeCopied);
      String& set(const char* cString);
      std::ostream& display()const;
      ~String();
   };
}


#endif // !SDDS_STRING_H__
