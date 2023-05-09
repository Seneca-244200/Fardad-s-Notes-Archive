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
      virtual void act()const;// makes sure that the latest version of the function (act) will be called  
      void move()const;// makes move NOT upgradable
      virtual void sound()const;
      virtual ~Animal();// if destructor is not virtual, there a danger 
                        // of having memory leak if you have inheritance
                        // and you pointer to a DMA child.
   };
   extern bool debug;  // becomes like a prototype of debug 
                       // variable in Animal.cpp to make it 
                       // really global to all files
}
#endif