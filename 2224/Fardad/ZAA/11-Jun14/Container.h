#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container{
      double m_volume{};
      double m_capacity{};
   public:
      Container(double capacity = 250.0, double volume = 0.0);
      Container& operator=(double value);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      Container& operator+=(double value);
      Container& operator+=(Container& cnt);
      double volume()const;
      double capacity()const;
      bool isSafeInvalidEmpty()const; // return true if not in safeEmpty state
      bool operator!()const;
      Container& operator++(); // prefix
      Container operator++(int); // postfix
      void clear();
      bool isEmpty()const; // is not an empty state, but an empty container
      Container operator+(Container& rightOperand);// converted the helper to a mothod
      Container& operator-=(double vol);
   };
   //Container operator+( Container& leftOperand, Container& rightOperand);// helper operator
   std::ostream& operator<<(std::ostream& leftOper, const Container& rightOper);
   std::istream& operator>>(std::istream& leftOper, Container& rightOper);
   //unary as helper (big no no, just for learning)
   Container& operator--(Container& oper);
}
#endif // !SDDS_CONTAINER_H


