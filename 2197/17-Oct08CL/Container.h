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
      operator int()const;
      operator double()const;

      Container& operator+=(int value);
      Container& operator+=(const Container& rightOperand);
      Container& operator=(int value);
      Container& operator=(const Container& C);
      Container& operator++();
      Container operator++(int);
      Container operator+(const Container& rightOperand)const;
      int value()const;
      bool operator!()const;
      void set(int value);
      void set(int value, int capacity);
      void set2SafeEmptyState();
      bool isInSafeEmptyState()const;
      std::ostream& display(std::ostream& os = std::cout)const;
      std::istream& read(std::istream& is = std::cin);
      //friend Container operator-(const Container& leftOper,
      //   const Container& rightOper);
   };

   Container operator-(const Container& leftOper,
      const Container& rightOper);
   std::ostream& operator<<(std::ostream& os, const Container& toBePrinted);
   std::istream& operator>>(std::istream& is, Container& toBeRead);
}


#endif // !
