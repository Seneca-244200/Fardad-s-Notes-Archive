#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>
// not allowed to apply "using namespace std;"
namespace sdds {
   class Name {
      char* m_title{};
      char* m_value{}; // initialzied to nullptr
      void setEmpty();
      void deallocate();
   public:
      Name();  // default or no Arg constructor
      Name(const char* value);
      Name(const char* title,
          const char* name);
      ~Name(); // destructor

      bool isSafeEmpty()const;


      // after set is call will Name change
      Name& set(const char* name);   // this will modify the Name
      Name& set(const Name& N);
      const char* get()const;       // forces get not to change
                                    // or modify the owner
                                    // that is the Name object
      std::ostream& display(std::ostream& ostr = std::cout)const;   // on ostream
      // read should not be const since it is suppose to 
      // change the name to what is entered from the screen
      std::istream& read(std::istream& istr = std::cin);      // from istream
      // deallocation can not be const since it is freeing the
      // memory of Name

   };
}
#endif // !SDDS_NAME_H



