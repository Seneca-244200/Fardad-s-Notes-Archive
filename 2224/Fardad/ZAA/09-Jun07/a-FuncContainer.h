#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container{
      double m_volume{};
      double m_capacity{};
   public:
      Container(double capacity, double volume = 0.0);
      Container& set(double value);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      Container& add(double value);
      Container& add(Container& cnt);
      double volume()const;
      double capacity()const;
      bool isSafeInvalidEmpty()const; // return true if not in safeEmpty state
      bool isEmpty()const; // is not an empty state, but an empty container
   };
   Container sum( Container& first, Container& second);
}
#endif // !SDDS_CONTAINER_H


