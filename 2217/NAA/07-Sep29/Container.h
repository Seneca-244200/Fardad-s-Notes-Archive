#ifndef SDDS_CONTAINER
#define SDDS_CONTAINER
#include <iostream>
//#define SDDS_LIFETIME

namespace sdds {
   class Container {
      int m_value;
      int m_capacity = 0;
      void setSafe();
      int handleOverflow();
   public:
      Container(int value = 0, int capacity = 250);
      Container& operator+=(const Container& RO);
      Container& operator=(const Container& Ro);
      std::ostream& display(std::ostream& output = std::cout);
      /*Container operator+(const Container& Ro)const ;*/
      Container operator+(const Container& Ro)const;
      Container& operator--();
      bool operator!()const;
      Container operator++(int);
      // no return type
      operator int()const;
      ~Container();
   };

}

#endif // !SDDS_CONTAINER


