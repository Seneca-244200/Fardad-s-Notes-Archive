#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
#include <iostream>
namespace sdds {
   class Animal { // if all the methods are pure virutal, in object oriented terminology: interface 
   public:
      virtual void act() = 0;
      virtual void move() = 0;
      virtual void sound() = 0;
      virtual ~Animal( ) = default;
   };
   std::ostream& operator<<( std::ostream& ostr, Animal& A );
}
#endif