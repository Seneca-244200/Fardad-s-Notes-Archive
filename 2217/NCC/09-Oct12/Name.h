#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
#define SDDS_LIFETIME


namespace sdds {
   class Name {
//      char* m_data = nullptr; // happens even before the constructor
      char* m_data{}; // default it, in case set to nullptr
      void setEmpty();
      public:
         Name(const char* name = nullptr);
         // Rule of three:
         Name(const Name& copyFrom);// Copy Constructor
         Name& operator=(const Name& rightOperand); // Copy Assignment
         ~Name(); // Destructor
         // end Rule of three
         std::ostream& display(std::ostream& ostr = std::cout)const;
         std::istream& read(std::istream& istr = std::cin);
   };
   std::ostream& operator<<(std::ostream& leftOperand, const Name& rightOperand);
   std::istream& operator>>(std::istream& leftOperand, Name& rightOperand);

}

#endif // !SDDS_NAME_H


