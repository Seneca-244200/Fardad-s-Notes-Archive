#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds {
   class Animal {
      char m_name[41];
   public:
      Animal(const char* name = "Nameless");
      const char* name()const;
      void name(const char* value);
      virtual void act();
      virtual void move();
      // makes sure, the latest
      // version of the fucntion(sound)
      // will be called.
      virtual void sound();
      // makes sure, the latest
       // version destructor(the child's) is call
       // will be called.
      virtual ~Animal();
   };
   extern bool debug;  // becomes like a prototype of debug 
                       // variable in Animal.cpp to make it 
                       // really global to all files
}
#endif