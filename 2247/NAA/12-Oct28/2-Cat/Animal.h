#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds {
   class Animal {
   private:
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