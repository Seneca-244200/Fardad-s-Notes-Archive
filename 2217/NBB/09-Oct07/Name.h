#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
//#define SDDS_LIFETIME

namespace sdds {
   class Name {
//      char* m_data = nullptr;
//      char* m_data{ nullptr };
      char* m_data{};// same as above
      void setEmpty();
      void allocateAndCopy(const char* name, char tag = char(0));
   public:
      Name(const char* name = nullptr);
      // the following three lines are the rule of three
      Name(const Name& cp);// copy constructor
      Name& operator=(const Name& cp); // copy assignment
      ~Name();

      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);

   };
   std::ostream& operator<<(std::ostream& leftOperand, const Name& rightOperand);
   std::istream& operator>>(std::istream& leftOperand, Name& rightOperand);

}

#endif // !SDDS_NAME_H


