#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
// not allowed to "using namesapce std;" in a headerfile
namespace sdds {
   class Name {
      char* m_title{};
      char* m_value{};
      void setEmpty();
      void deallocate();
   public:
      Name(); // default or no arg constructor
      Name(const char* value); // one argumet constructor
      Name(const char* title, const char* name);
      ~Name(); // destructor
      // after the set is called, will the Name change?
      Name& set(const char* value);
      Name& set(const Name& toCopy);
      // after the get is called, 
      // should not make any change to the Name
      const char* get()const; //const make the owner read only
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
}
#endif // !SDDS_NAME_H


