#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds {
   class Animal {
      char m_name[41]{};
      void name( const char* value );  // modifier or setter
   public:
      Animal(const char* name = "Nameless");
      const char* name()const; // query or getter
      void act();
      void move();
      void sound();
      ~Animal();

     /* Animal( const Animal& A );
      Animal& operator=( const Animal& A );*/
     
   };

   extern bool debug;
}
#endif