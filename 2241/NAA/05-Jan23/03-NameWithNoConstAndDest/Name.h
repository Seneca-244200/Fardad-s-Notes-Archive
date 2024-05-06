#ifndef SENECA_NAME_H
#define SENECA_NAME_H
namespace seneca {
   struct Name {
   private:
      char* m_givenName;
      char* m_surname;
      void set( const char* name, const char* surname );
      void deallocate( );
   public:
      void init( );
      void read( );
      void print( )const;
      void finalize( );
   };
}
#endif // !SENECA_NAME_H


