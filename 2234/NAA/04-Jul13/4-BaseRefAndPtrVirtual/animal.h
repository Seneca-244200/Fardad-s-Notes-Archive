#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds {
   class Animal {
      char m_name[41];
      void name(const char* value);
   protected:
      const char* name()const;
   public:
      Animal(const char* name = "Nameless");
      virtual void act()const;
       void move()const;
      virtual void sound()const;
      virtual ~Animal();
   };
   extern bool debug;  // becomes like a prototype of debug 
                       // variable in Animal.cpp to make it 
                       // really global to all files
}
#endif