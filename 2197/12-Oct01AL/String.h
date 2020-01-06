#ifndef SDDS_STRING_H__
#define SDDS_STRING_H__
#include <iostream>
namespace sdds {
   class String {
      int m_size;
      char* m_data;
      void AllocateAndCopy(const char* cString);
   public:
      String();
      String(const String& ToBeCopied);
      String(const char* cString);
      String& set(const char* cString);
      const char* cString()const;
      int size()const;
      String& concat(const char* cString);
      String& concat(const String& S);
      std::ostream& display()const;
      ~String();
   };
}


#endif // !SDDS_STRING_H__
