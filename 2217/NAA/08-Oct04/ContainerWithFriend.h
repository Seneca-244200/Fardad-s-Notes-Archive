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



      Container(int capacity = 250, int value = 0);
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
      friend std::istream& operator>> (std::istream& istr, Container& Ro);
   };

   std::ostream& operator<< (std::ostream& ostr, const Container& Ro);
   std::istream& operator>> (std::istream& istr, Container& Ro);

}

#endif // !SDDS_CONTAINER


