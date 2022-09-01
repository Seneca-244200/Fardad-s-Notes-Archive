#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
// we are not allowed to apply using namespace in a header file
// therefore I can not write here "using namespace std;" and instead
// I have manually qualify all objects and classes created in iostream
namespace sdds {
   class Name {
      char* m_title{};
      char* m_value;
      void setEmpty();
      void deallocate(); // cannot be const since it WILL change the name
      void setTitle(const char* title);
   public:
      Name();  // default constructor
      Name(const char* value);
      Name(const char* title, const char* name);
      ~Name(); // destructor
 
      bool isEmpty()const;

      Name& set(const Name& toCopy);
      Name& set(const char* name); // after set is called, will the Name change?
      // you can enforce a member function NOT TO change the owner by adding a const after the prototype
      const char* get()const;  // after get is called , will the Name change?

      std::ostream& display(std::ostream& ostr = std::cout)const;

      std::istream& read(std::istream& istr = std::cin); // cannot be const since it WILL change the name
   };
}
#endif // !SDDS_NAME_H


