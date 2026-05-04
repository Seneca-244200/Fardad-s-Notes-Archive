#ifndef SENECA_NAME_H
#define SENECA_NAME_H  
#include <iostream>  
namespace seneca {
   class Name {
      char* m_first{};
      char* m_last{};
      void copy(const char* first, const char* last);
      void deallocate();
   public:
      Name() = default;
      Name(const char* first, const char* last);
      // do this for rule of 3 with prevention
      //Name(const Name& other) = delete; // copy constructor
      //Name& operator=(const Name& other) = delete;// copy Assignment
      Name(const Name& other); // copy constructor
      Name& operator=(const Name& other);// copy Assignment
      ~Name();
      std::ostream& display(std::ostream& os)const;
      std::istream& read(std::istream& is);
      operator bool()const;
   };
   std::ostream& operator<<(std::ostream& os, const Name& N);
   std::istream& operator>>(std::istream& is, Name& N);
}
#endif
