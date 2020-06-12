#ifndef SDDS_STRING_H__
#define SDDS_STRING_H__
#include <iostream>
namespace sdds {
   class String {
      char* m_data;
      int m_size;
      void setEmpty();
   public:
      String();
      String(const char* str);
      /* do the following to prevent copying and assignment
      String(const String& S) = delete;
      String& operator=(const String& S) = delete;   
      */
      String(const String& S);
      String& operator=(const String& S);
      ~String();
      bool operator>(const String& S)const;
      void set(const char* str);
      String& operator+=(const String& Ro);
      String& operator=(const char* str);
      std::ostream& print(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      void freeMemory();
      int size()const;
      bool isEmpty()const; 
   };
   String concat(const String& S1, const String& S2);
   std::ostream& operator<<(std::ostream& ostr, const String& RO);
   std::istream& operator>>(std::istream& istr, String& RO);
}


#endif // !SDDS_STRING_H__