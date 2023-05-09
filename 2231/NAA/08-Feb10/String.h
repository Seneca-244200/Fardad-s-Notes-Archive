#include <iostream>
#ifndef SDDS_STRING_H_
#define SDDS_STRING_H_
namespace sdds {
   class String {
      size_t m_length{};
      char* m_data{};
   public:
      String(const char* cstr = nullptr);
      ~String();
      std::ostream& display(std::ostream& ostr = std::cout)const;
      operator bool()const;  // type conversion overload
      size_t length()const;
      String& operator+=(const String& Roperand);
   };
   std::ostream& operator<<(std::ostream& ostrLeftOperand, const String& Roperand);
}
#endif // !SDDS_STRING_H_



