#ifndef SENECA_STR_H
#define SENECA_STR_H
#include <iostream>
// using namespace std; you are not allowed to use "using" in headerfiles
namespace seneca {
   class Str {
      char* m_data{};
      Str& resize( size_t newsize );
   public:
      Str( ) = default;
      Str( const char* data );
      Str( const char* data, size_t len );

      // Rule of three
//      Str( const Str& toCopy ) = delete;// to prevent
      Str( const Str& toCopy );
      Str& operator=( const Str& str );
      ~Str( );

      Str& operator=( const char* data );
      Str& operator+=( const char* data );
      Str& operator+=( const Str& str );

      Str operator+( const Str& rightOperand )const;


      operator const char* ()const;
      operator size_t( )const;

      char& operator[]( size_t index );
      const char& operator[]( size_t index )const;

      Str& operator++(); // prefix
      Str& operator++(int); // postfix


      //Str& operator+=( const Str& str );
      std::ostream& print(std::ostream& ostr  = std::cout )const;
      std::istream& read( char delimiter = '\n',  std::istream & istr = std::cin );
   };
   Str operator+( const char* cstr, const Str& str );
   std::ostream& operator<<( std::ostream& ostr, const Str& str );
   std::istream& operator>>( std::istream& ostr, Str& str );
   /*
*  operator to overload: operator<<
*  type of the left operand:  ostream
*  type of the right operand: Str
*  return is the return type: ostream
*
*/
}
#endif // !SENECA_STR_H




