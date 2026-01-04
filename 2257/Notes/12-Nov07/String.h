#pragma once
#ifndef SENECA_STRING_H
#define SENECA_STRING_H
#include <iostream>
namespace seneca {
   class String {
  //    char* m_data = nullptr;
  //    size_t m_size = 0u;
      char* m_data{};
      size_t m_size{};
   public:
       String() = default; // compiler will make an empty one
       String(const char* data);
 //      String(const String& other) = delete; // to deny it
       String(const String& other);
       String& operator=(const String& other);
       ~String();
       operator bool()const;
       std::ostream& display(std::ostream& ostr = std::cout)const;
   };
   std::ostream& operator<<(std::ostream& ostr, const String& right);
}
#endif // !SENECA_STRING_H


