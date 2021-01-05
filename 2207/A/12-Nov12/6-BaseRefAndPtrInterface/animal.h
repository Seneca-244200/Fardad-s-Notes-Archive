#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds{
   class Animal { // interface 
   public:
      virtual void act() = 0;
      virtual void move() = 0;
      virtual void sound() = 0;
      virtual ~Animal() {
      }
   };
}
#endif