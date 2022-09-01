#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container {
      int m_volume{};
      int m_capacity{};
   public:
      bool isValid()const;
      bool operator!()const;
      Container(int cap = 250, int vol = 0);
      Container& clear();
      Container& operator~();
 //     Container& operator=(Container& right);   // copy assignment
 //     Container& operator=(Container right);   // copy assignment
      Container& operator=(int vol);
      Container& operator+=(int vol);
      Container& operator+=(Container& C);
      Container& operator++(); // prefix
      Container operator++(int); // postix
      int volume()const;
      int capacity()const;
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      Container operator+(Container& right);
   };
   //Container operator+(Container& left, Container& right); //helper
   std::ostream& operator<<(std::ostream& left, const Container& right);// helper
   std::istream& operator>>(std::istream& left, Container& right);// helper
   Container& operator--(Container& operand); //prefix helper (Yuck!!!)
   Container operator--(Container&, int); // postfix helper (double Yuck!!!)

}
#endif

