#ifndef SDDS_FERAL_H__
#define SDDS_FERAL_H__
#include <iostream>
#include "Animal.h"
namespace sdds {
   class Feral : public Animal {
      int m_tagNo;
   public:
      Feral(int tagNo = 0);
      operator bool()const;
      int tag()const;
      void tag(int tagNo);
      void setEmpty();
      bool isEmpty()const;

      void move()const;
      void act()const;
      void sound()const;

      std::ostream& display(std::ostream& os = std::cout)const;
      std::istream& read(std::istream& is = std::cin);
   };
}

#endif