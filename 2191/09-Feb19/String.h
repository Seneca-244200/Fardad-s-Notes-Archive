#ifndef SICT_STRING_H__
#define SICT_STRING_H__
#include <iostream>

namespace sict {
  class String {
    char *m_data;
    unsigned int m_size;
    void set(const char* cstring);
    void set(const String& S);
  public:
    String();
    String(const char* cstring);
    String(const String& S); // must
    ~String();
    int size()const;
    String& operator=(const char* RO_cstring);
    String& operator=(const String& RO_String); // must
    std::ostream& display(std::ostream& os = std::cout)const;
    std::istream& read(std::istream& is = std::cin);
    String& append(const String& S);
    String& append(const char* cstring);
    String& addSpaceAfter();
    String& addSpaceBefore();
    int compare(const String& RS)const;
  };
  std::ostream& operator<<(std::ostream& LO_cout,const String& RO_String);
  std::istream& operator>>(std::istream& LO_cin, String& RO_String);

}
#endif