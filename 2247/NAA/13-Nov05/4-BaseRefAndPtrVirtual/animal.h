#ifndef SENECA_ANIMAL_H__
#define SENECA_ANIMAL_H__
namespace seneca {
   class Animal {
      char m_name[41];
      void name(const char* value);
   protected:
      const char* name()const;
   public:
      Animal(const char* name = "Nameless");
      virtual void act()const;// makes sure that the latest version of the function (act) will be called  
      void move()const;// makes move NOT upgradable
      virtual void sound()const;
      virtual ~Animal();
   };
}
#endif