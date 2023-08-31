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
       void act();
       void move();
       void sound();
       ~Animal();
   };
   extern bool debug;  
}
#endif