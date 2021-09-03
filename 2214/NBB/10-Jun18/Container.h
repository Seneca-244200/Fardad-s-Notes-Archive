#ifndef SDDS_CONTAINTER_H
#define SDDS_CONTAINTER_H
#include <iostream>
// using namespace is not allowed in
// a headerfile
namespace sdds {
   class Container {
   private:
      char m_content[81];
      double m_volume;
      Container& setSafeEmpty();
   public:
      Container();
      bool isSafeEmpty()const;
      bool operator!()const;
      Container(const char* content
         , double volume = 0.0);
      Container& set(const char* content
         , double volume);
      Container& operator=(double volume);
      Container& operator=(const char* content);
      std::ostream& print(std::ostream& os = std::cout)const;
      Container operator+(const Container& Ro)const;
      Container& operator+=(double value);
      Container& operator++();
      Container operator++(int); // << int only means postfix, it has nothing
                                  // to do with getting an int argument.

      // type conversion operators;
      operator double()const;
      operator const char* ()const;
      operator bool()const;
   };
   //helper
   std::ostream& operator<<(std::ostream& os, const Container& cnt);


}
#endif // !SDDS_CONTAINTER_H