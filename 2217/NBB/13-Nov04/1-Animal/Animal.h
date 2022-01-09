#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds {
   class Animal {
      char m_name[41]{};
   public:
      Animal(const char* name = "Nameless");
  /*    Animal(const Animal& A);
      Animal& operator=(const Animal& A);*/
      const char* name()const; // query or getter
      void name(const char* value);  // modifier or setter
      void act();
      void move();
      void sound();
      ~Animal();
   };
   extern bool debug;  
}
#endif