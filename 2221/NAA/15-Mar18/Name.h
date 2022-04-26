#ifndef SDDS_NAME_H__
#define SDDS_NAME_H__
#include <iostream>
namespace sdds {
   class Name {
      char* m_value{};
   protected:
      const char* nameValue()const;
   public:
      Name(const char* value = nullptr);
      Name(const Name& cp);
      Name& operator=(const Name& RO);
      // makes sure no leak if inherited
      virtual ~Name();
      virtual std::ostream& display(std::ostream& ostr = std::cout)const;
      virtual std::istream& read(std::istream& istr = std::cin);
   };
   std::ostream& operator<<(std::ostream& ostr, const Name& N);
   std::istream& operator>>(std::istream& istr, Name& N);
}
#endif // !SDDS_NAME_H__

