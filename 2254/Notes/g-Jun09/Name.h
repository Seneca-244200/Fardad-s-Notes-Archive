#ifndef SENECA_NAME_H
#define SENECA_NAME_H
#include <iostream>
namespace seneca {
   const int MaxNameLength = 127;
   class Name {
      char m_value[MaxNameLength +1];
   public:
      Name( const char* value  = nullptr );

      Name& operator+=( const char* other );
      Name& operator+=( const Name& other );
      Name& operator++( int );
      Name& operator++( );
      Name operator+( const Name& other )const;
      // read only;
      char operator[]( size_t index )const;
      // read wrire access
      //char& operator[]( size_t index );
      std::ostream& display( std::ostream& ostr = std::cout )const;
      std::istream& read( std::istream& istr = std::cin );
      operator int( )const;



   // Bad thing to do:(never do it)
   // friend Name operator+( char badleft, const Name& badright );;
   };
   // helpers
 
   std::ostream& operator<<( std::ostream& left, const Name& right );
   std::istream& operator>>( std::istream& left, Name& right );

   // good one
   Name operator+( char left, const Name& right );
   Name operator+(const char* left, const Name& right );
   // Bad one
   //Name operator+( char badleft, const Name& badright );

}
#endif // !SENECA_NAME_H


