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
      operator int()const;
      operator bool()const;
      bool operator!() const;
      Container& operator++();
      Container operator++(int);
      Container& operator=(int value);
      Container& operator+=(int value);
      Container& operator+=(const Container& RightOperand);
      Container operator+(const Container& RightOperand)const;
      void set(int value, int capacity);
      void set2SafeEmptyState();
      bool isInSafeEmptyState()const;
      std::ostream& display(std::ostream& os = std::cout)const;
      std::istream& read(std::istream& is = std::cin);
  /*    friend Container operator-(const Container& leftOperand,
         const Container& righOperand);*/
   };

   Container operator-(const Container& leftOperand,
                       const Container& righOperand);

   std::ostream& operator<<(std::ostream& os,
      const Container& rightOperand);
   std::istream& operator>>(std::istream& is,
      Container& rightOperand);

}


#endif // !
