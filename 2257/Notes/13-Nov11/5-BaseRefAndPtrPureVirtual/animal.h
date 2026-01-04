#ifndef SENECA_ANIMAL_H__
#define SENECA_ANIMAL_H__
namespace seneca {
   class Animal {  // abstract base classes.
      char m_name[41];
   public:
      Animal(const char* name = "Nameless");
      const char* name()const;
      void name(const char* value);
      virtual void act();
      // makes sure that the latest version of the function (act) will be called
      virtual void move();
      virtual void sound() = 0; // pure virtual function
      virtual ~Animal();
   };
}
#endif