#ifndef SENECA_STR_H
#define SENECA_STR_H
#include <iostream>
// using namespace std; you are not allowed to use "using" in headerfiles
namespace seneca {
   class Str {
      char* m_data;
   public:
      Str( );
      Str( const char* data );
      Str( const char* data, size_t len );
      ~Str( );

      Str& set( const char* data );
      Str& cat( const char* data );
      //Str& cat( const Str& str );
      std::ostream& print( )const;
   };
}
#endif // !SENECA_STR_H




