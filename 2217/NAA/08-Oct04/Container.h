#ifndef SDDS_CONTAINER
#define SDDS_CONTAINER
#include <iostream>
//#define SDDS_LIFETIME

namespace sdds {
   class Container {
      int m_capacity = 0;
      int m_value;
      void setSafe();
      int handleOverflow();
   public:

      std::ostream& display(std::ostream& output = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);



      Container( int value = 0, int capacity = 250);
      Container& operator+=(const Container& RO);
      Container& operator=(const Container& Ro);
      /*Container operator+(const Container& Ro)const ;*/
      Container operator+(const Container& Ro)const;
      Container& operator--();
      bool operator!()const;
      Container operator++(int);
      // no return type
      operator int()const;
      ~Container();
     
   };

   std::ostream& operator<< (std::ostream& ostr, const Container& Ro);
   std::istream& operator>> (std::istream& istr, Container& Ro);
   //Container operator+(int value, const Container& Ro);

}

#endif // !SDDS_CONTAINER


