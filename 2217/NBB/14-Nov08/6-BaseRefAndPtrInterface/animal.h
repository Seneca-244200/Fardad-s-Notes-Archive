#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds {
   class Animal { // if all the methods are pure virutal, in object oriented terminology: interface 
   public:
      virtual void act() = 0;
      virtual void move() = 0;
      virtual void sound() = 0;
      virtual ~Animal();
   };
   extern bool debug;  // becomes like a prototype of debug 
                       // variable in Animal.cpp to make it 
                       // really global to all files
}
#endif