#ifndef SDDS_CONTAINTER_H
#define SDDS_CONTAINTER_H
#include <iostream>
// using namespace is not allowed
// in a header file

namespace sdds {
   class Container {
   private:
      char m_content[81];
      double m_volume;
      Container& setSafeEmpty();
   public:
      Container();
      Container(const char* content,
         double volume = 0.0);
      Container& set(const char* content, double volume);
      Container& operator=(double volume);
      Container& operator=(const char* content);
      bool isSafeEmpty()const;
      bool operator!()const;
      Container& operator++();
      Container operator++(int);// int only means postfix
      std::istream& read(std::istream& is = std::cin);
      std::ostream& display(std::ostream& os = std::cout)const;
      Container operator+(const Container& Ro)const;
      Container& operator+=(double value);
      // type converstion operators:
      operator const char* ()const;
      operator double()const;
      operator bool()const;
   };
   // helper function (operator overload functions)
   std::ostream& operator<<(std::ostream& os, const Container& cnt);
   std::istream& operator>>(std::istream& os, Container& cnt);
   

}
#endif // !SDDS_CONTAINTER_H