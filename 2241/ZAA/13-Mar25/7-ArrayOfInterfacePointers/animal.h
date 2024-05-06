#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
#include <iostream>
namespace sdds{
   // in OOP: Animal Interface
  class Animal{
  public:
    virtual void act()const = 0;
    virtual void move()const = 0;
    virtual void sound()const = 0;
    virtual ~Animal( ) = default;
  };
  std::ostream& operator<<( std::ostream& ostr, const Animal& p );
}
#endif