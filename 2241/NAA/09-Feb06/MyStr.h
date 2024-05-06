#ifndef SENECA_MYSTR_H
#define SENECA_MYSTR_H
#include <iostream>
// using namespace std; DO NOT DO THIS
namespace seneca {
   class MyStr {
      char* m_data;
   public:
      MyStr( const char* cString, size_t maxLen );
      MyStr( const char* cString );
      MyStr( );
      ~MyStr( );
      MyStr& operator=( const char* cString );
      MyStr& operator+=( const char* cString );
      MyStr& operator=( const MyStr& mstr );
      MyStr& operator+=( const MyStr& mstr );

      MyStr& operator--( );
      MyStr& operator--(int ); // post fix

      std::ostream& print(std::ostream& ostr = std::cout )const;
      std::istream& read( char delimiter = '\n', std::istream& istr = std::cin );

   };
   std::ostream& operator<<( std::ostream& ostr, const MyStr& str );
}
#endif // !SENECA_MYSTR_H


