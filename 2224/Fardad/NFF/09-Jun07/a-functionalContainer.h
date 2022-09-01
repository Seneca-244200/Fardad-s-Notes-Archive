#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container {
      int m_volume{};
      int m_capcity{};
   public:
      Container(int cap = 250, int vol = 0);
      Container& set(int vol);
      Container& add(int vol);
      Container& add(Container& C);
      int volume()const;
      int capacity() const;
      std::ostream& display(std::ostream& ostr = std::cout)const;
   };
   Container sum(Container& left,Container& right);
}
#endif // !SDDS_CONTAINER_H


