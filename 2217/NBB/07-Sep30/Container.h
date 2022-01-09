#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H

//#define SDDS_LIFETIME

#include <iostream>
namespace sdds {
   class Container {
      int m_value;
      int m_capacity = 0;
      void setSafe();
      int handleOverflow();
   public:
      Container(int value = 0, int capacity = 250);

      Container& operator+=(const Container& Ro);
      Container& operator=(const Container& Ro);
      Container operator+(const Container& Ro)const;

      //bool operator!()const;
      Container& operator++();
      Container operator++(int);
      operator int() const;
      // this makes operator! redundant
      operator bool()const;
      std::ostream& display(std::ostream& output = std::cout);
      ~Container();
   };

}
#endif // !SDDS_CONTAINER_H


