#ifndef SDDS_NAME_H_
#define SDDS_NAME_H_
#include <iostream>
namespace sdds {
   class Name {
      char* m_value{};
      void allocateAndCopy(const char* value);
   public:
      Name(const char* value = nullptr);
      Name(const Name& toCopyFrom);
      Name& operator=(const Name& toCopyFrom);
      ~Name();
      std::ostream& display(std::ostream& coutRef = std::cout)const;
      std::istream& read(std::istream& cinRef = std::cin);
   };
   std::ostream& operator<<(std::ostream& left, const Name& right);
   std::istream& operator>>(std::istream& left, Name& right);
}
#endif // !SDDS_NAME_H_


