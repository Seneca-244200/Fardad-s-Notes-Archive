#include <iostream>
#ifndef SDDS_STRING_H_
#define SDDS_STRING_H_
namespace sdds {
   class String {
      size_t m_length{};
      char* m_data{};
      void setEmpty();
   public:
      String(const char* cstr = nullptr);
      // rule of three
      String(const String& S);    // copy constructor
      String& operator=(const String& S); // copy assignment
      ~String();  // destructor
      // end rule of three
     // std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      operator bool()const;  // type conversion overload
      size_t length()const;
      String& operator+=(const String& Roperand);
      String& operator+=(const char* cstr);
      // very bad, never do this!!!!
      friend std::ostream& operator<<(std::ostream& ostrLeftOperand, const String& Roperand);
   };
   std::ostream& operator<<(std::ostream& ostrLeftOperand, const String& Roperand);
   std::istream& operator>>(std::istream& istrLeftOperand, String& Roperand);
}
#endif // !SDDS_STRING_H_



