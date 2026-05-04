#ifndef SENECA_NAME_H
#define SENECA_NAME_H  
#include <iostream>  
namespace seneca {
   class Name {
      char* m_first{};
      char* m_last{};
      void copy(const Name& other);
      void free();
   public:
      Name() = default;
      Name(const Name& other);// copy constructor
      Name& operator=(const Name& other);
      // to prevent copy assignment
      //Name& operator=(const Name& other) = delete;
      Name(const char* first, const char* last);
      ~Name();
      std::ostream& display(std::ostream& os)const;
      std::istream& read(std::istream& is);
      operator bool()const;
   };
   std::ostream& operator<<(std::ostream& os, const Name& N);
   std::istream& operator>>(std::istream& is, Name& N);
}
#endif
