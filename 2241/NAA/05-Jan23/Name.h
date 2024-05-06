#ifndef SENECA_NAME_H
#define SENECA_NAME_H
namespace seneca {
   class Name{
      char* m_givenName;
      char* m_surname;
      void deallocate( );
   public:
      void set( const char* name, const char* surname );
      Name( ); // construction
      ~Name( ); // destruction
      void read( );
      void print( )const;
      size_t length( )const;
   };
}
#endif // !SENECA_NAME_H


