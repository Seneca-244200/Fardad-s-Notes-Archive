#ifndef SDDS_CONTAINER_H__
#define SDDS_CONTAINER_H__
#include <iostream>

namespace sdds {
   const int maxCapacity = 1000;
   class Container {
      int m_value;
      int m_capacity;
   public:
      Container();
      Container(int value);
      Container(int value, int capacity);
      ~Container();
      void set(int value);
      bool operator!() const;
      Container& operator++();
      Container operator++(int);
      Container& operator=(int value);
      Container& operator+=(int value);
      Container& operator+=(const Container& C);
      void set(int value, int capacity);
      void set2SafeEmptyState();
      bool isInSafeEmptyState()const;
      std::ostream& display()const;
   };


}


#endif // !
