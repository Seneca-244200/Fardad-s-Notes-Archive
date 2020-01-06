#ifndef SDDS_CONTAINER_H__
#define SDDS_CONTAINER_H__
#include <iostream>
#define SDDS_DEBUG__
namespace sdds {
   const int maxCapacity = 100;
   class Container {
      int m_value;
      int m_capacity;
      void setToSafeEmptyState();
   public:
      Container();
      Container(int value);
      Container(int value, int capacity);
      ~Container();
      Container& set(int data);
      Container& set(int data, int capacity);
      bool isInEmptyState()const;
      std::ostream& display()const;
   };


}


#endif // !
