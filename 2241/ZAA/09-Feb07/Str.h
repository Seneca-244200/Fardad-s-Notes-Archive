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

      Str& operator=( const char* data );
      Str& operator+=( const char* data );
      Str& operator=( const Str& str );
      Str& operator+=( const Str& str );

      Str& operator++(); // prefix
      Str& operator++(int); // postfix


      //Str& operator+=( const Str& str );
      std::ostream& print(std::ostream& ostr  = std::cout )const;
      std::istream& read( char delimiter = '\n',  std::istream & istr = std::cin );
   };
}
#endif // !SENECA_STR_H




