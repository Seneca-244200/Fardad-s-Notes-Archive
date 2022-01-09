#ifndef SDDS_CLSLOG_H_
#define SDDS_CLSLOG_H_
#include <iostream>
#define SDDS_LIFETIME
namespace sdds {
   class ClsLog {
      char m_data[1024]{};
   public:
      ClsLog();   // Default
      ClsLog(const char str[]); // Instantiation
      ClsLog(const ClsLog& C);     // Copy
      ClsLog& operator=(const ClsLog& C); // Copy Assingment
      ~ClsLog();
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
   std::ostream& operator<<(std::ostream& ostr, const ClsLog& C);
   std::istream& operator>>(std::istream& istr, ClsLog& C);
}
#endif // !SDDS_CLS_H_


