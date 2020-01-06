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
      Container& set(int value);
      int value()const;
      bool operator!() const;
      Container& operator++();
      Container operator++(int);
      Container& operator=(int value);
      Container& operator+=(int value);
      Container& operator+=(const Container& C);
      Container operator+(const Container& C)const;
      Container& set(int value, int capacity);
      void set2SafeEmptyState();
      bool isInSafeEmptyState()const;
      std::ostream& display(std::ostream& os = std::cout)const;
      operator int()const;
      operator double() const;




    /*  friend Container operator-(const Container& lefrOper,
         const Container& rightOper);*/


   };
   Container operator-(const Container& lefrOper,
                        const Container& rightOper);
   std::ostream& operator<<(std::ostream& os, const Container& rightOperand);
}


#endif // !
