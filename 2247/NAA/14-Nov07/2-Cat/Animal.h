#ifndef SENECA_ANIMAL_H
#define SENECA_ANIMAL_H
namespace seneca {
   class Animal {
      char m_name[41]{};
   protected:
      void name( const char* value );
   public:
      Animal( );
      Animal(const char* name);
      const char* name( )const;

      void act();
      void move();
      void sound();
      ~Animal();
   };
}
#endif