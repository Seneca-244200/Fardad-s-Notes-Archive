#ifndef SDDS_CONTAINTER_H
#define SDDS_CONTAINTER_H
#include <iostream>
// using namespace is not allowed in a headerfile
namespace sdds {
   class Container {
      char m_content[81];
      double m_value;
      void setSafeEmpty();
   public:
      Container();
      Container(const char* content, double value);
      Container& set(const char* content, double value);

      bool isSafeEmpty()const;
      bool operator!()const;
      std::ostream& print(std::ostream& os = std::cout)const;
      Container operator+(const Container& Ro)const;
      Container& set(double value);
      Container& operator=(double value);
      Container& operator=(const char* content);
      Container& operator+=(double value);
      Container& operator++();
      Container operator++(int); // << the int is just a flag to say this is postfix
      operator const char* ()const;
      operator double()const;
      operator bool()const;

  /*  Correct way of overloading 
      bool operator==(const Container& C)const;*/
      bool operator>(const Container& C)const;

 //     friend bool operator==(const Container& left, const Container& right);

   };
   std::ostream& operator<<(std::ostream& os, const Container& cnt);
   bool operator==(const Container& left, const Container& right);
}
#endif // !SDDS_CONTAINTER_H