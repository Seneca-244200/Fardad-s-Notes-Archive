#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
#define SDDS_LIFETIME


namespace sdds {
   class Name {
      char* m_data{}; // sets the object to its default state that is nullptr for char *
      void setEmpty();
   public:
      Name(const char* name = nullptr);
      Name(const Name& objectToBeCopied);
      Name& operator=(const Name& rightOperand);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      ~Name();
   };
   std::ostream& operator<<(std::ostream& leftOperand, const Name& rightOperand);
   std::istream& operator>>(std::istream& leftOperand, Name& rightOperand);
}

#endif // !SDDS_NAME_H


