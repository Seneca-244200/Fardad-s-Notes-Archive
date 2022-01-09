#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H

//#define SDDS_SHOW_LIFETIME

#include <iostream>

namespace sdds {
   class Container {
      int m_value;
      int m_capacity = 0;
      void setSafe();
      void handleOverflow();
   public:
      Container(int value = 0, int capacity = 250);
      std::ostream& display(std::ostream& output = std::cout)const;
      Container& operator+=(const Container& Ro);
      Container& operator=(const Container& Ro);

      Container operator+(const Container& Ro)const;

      

      Container& operator++();     // prefix
      Container operator++(int); // postfix
    //  bool operator!()const;

      operator int()const;
      // renders operator! useless.
      operator bool()const;

      ~Container();
   };
}
#endif // !SDDS_CONTAINER_H


