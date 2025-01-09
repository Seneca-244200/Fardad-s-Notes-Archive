#ifndef SENECA_ANIMAL_H
#define SENECA_ANIMAL_H
namespace seneca {
   class Animal {
      char m_name[41]{};
   public:
      Animal(const char* name = "Nameless");

      Animal(const Animal& A);
      Animal& operator=(const Animal& A);

      // setters and getters
      const char* name()const; // query or getter
      void name(const char* value);  // modifier or setter

      void act();
      void move();
      void sound();
      ~Animal();
   };
}
#endif