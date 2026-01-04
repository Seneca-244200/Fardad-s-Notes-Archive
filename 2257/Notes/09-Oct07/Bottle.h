#pragma once
#ifndef SENECA_BOTTLE_H
#define SENECA_BOTTLE_H
#include <iostream>
namespace seneca {
   class Bottle {
      char m_content[81];
      unsigned int m_capacity;
      unsigned int m_curAmount;
      bool m_overflow = false;
   public:
      Bottle(const char* content = nullptr, unsigned int capacity = 250u);    
      Bottle& operator+=(unsigned int amount);
      Bottle& operator=(unsigned int amount);
      Bottle& operator=(const Bottle& other);
      Bottle operator+(const Bottle& other)const;
      Bottle& operator++();// no int, prefix
      Bottle operator++(int); // int means postfix

      Bottle& clear();

      //type cast overload
      operator int()const;
      operator bool()const;
      std::ostream& display( std::ostream& ostr = std::cout )const;
      // never do this, 
      //friend int& operator+=(int& left, const Bottle& right);

      //subscription operator overload
      unsigned int operator[](size_t index)const;

   };
   // helper operator overload
   int& operator+=(int& left, const Bottle& right);

   std::ostream& operator<<(std::ostream& left, const Bottle& right);

}
#endif // !SENECA_BOTTLE_H


