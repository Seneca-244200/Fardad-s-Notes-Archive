#ifndef SENECA_ANIMAL_H
#define SENECA_ANIMAL_H
namespace seneca {
   class Animal { // if all the methods are pure virutal, in object oriented terminology: interface 
   public:
      virtual void act( ) = 0;
      virtual void move( ) = 0;
      virtual void sound( ) = 0;
      virtual ~Animal( ) = default;
   };
}
#endif 