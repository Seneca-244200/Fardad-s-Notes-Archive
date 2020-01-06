#ifndef SDDS_STRING_H__
#define SDDS_STRING_H__
#include <iostream>
namespace sdds {
   class String {
      int m_max_read_length;
      int m_length;
      char* m_data;
      void allocateAndCopy(const char* cString);
   public:
      String();
      String(const char* cString);
      String(const String& S);
  //    String(const String& S) = delete; prevent copying
      ~String();
      String& operator=(const char* cString);
      String& operator=(const String& S);
//  prevent asssignment
//      String& operator=(const char* cString) = delete;
//      String& operator=(const String& S) = delete;
      String& concat(const char* cString);
      String& concat(const String& S);
      String& operator+=(const char* cString);
      String& operator+=(const String& S);
      std::ostream& display(std::ostream& os=std::cout)const;
      std::istream& read(std::istream& is = std::cin);
      int length()const;
      const char* cString()const;
      int max_cin_length()const;
      void max_cin_length(int value);
   };
   std::ostream& operator<<(std::ostream& os,
      const String& RightOper);
   std::istream& operator>>(std::istream& is,
      String& RightOper);


}


#endif // !SDDS_STRING_H__
