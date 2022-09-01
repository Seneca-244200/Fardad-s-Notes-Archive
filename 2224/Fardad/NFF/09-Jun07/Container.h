#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container {
      int m_volume{};
      int m_capcity{};
   public:
      Container(int cap = 250, int vol = 0);
      Container& operator=(int vol);
      Container& operator+=(int vol);
      Container& operator+=(Container& C);
      int volume()const;
      int capacity() const;
      std::ostream& display(std::ostream& ostr = std::cout)const;
   };
   Container operator+(Container& left,Container& right); // helper
   std::ostream& operator<<(std::ostream& leftOper, const Container& righOper);
}
#endif // !SDDS_CONTAINER_H


