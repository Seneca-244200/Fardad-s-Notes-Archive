#ifndef SDDS_CLS_H_
#define SDDS_CLS_H_
#include <iostream>
#define SDDS_LIFETIME
namespace sdds {
   class Cls {
      char m_data[1024]{};
      void message(const char* mes, const char* value = nullptr, bool newline = true);
   public:
      Cls();   // Default
      Cls(const char str[]); // Instantiation
      Cls(const Cls& C);     // Copy
      Cls& operator=(const Cls& C); // Copy Assingment
      ~Cls();
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
   std::ostream& operator<<(std::ostream& ostr, const Cls& C);
   std::istream& operator>>(std::istream& istr, Cls& C);
}
#endif // !SDDS_CLS_H_


