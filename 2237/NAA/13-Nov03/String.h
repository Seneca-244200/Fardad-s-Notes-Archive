#include <iostream>
#ifndef SDDS_STRING_H_
#define SDDS_STRING_H_
namespace sdds {
   class String {
      // because of init all 
      // constructions will have
      // a safe empty state to start with
      char* m_data{};
      size_t m_length{};
      void setEmpty( );
   public:
      String( const char* cstr = nullptr );
      // rule of three
      ~String( );  // destructor
      String( const String& S );    // copy constructor
      String& operator=( const String& S ); // copy assignment

      operator bool( )const;  // type conversion overload
      size_t length( )const;

      std::ostream& display( std::ostream& ostr = std::cout )const;
      std::istream& read( std::istream& istr = std::cin , char delim = '\n' );
      // comparing

      bool operator<( const String& S )const;
      bool operator>( const String& S )const;
      bool operator<=( const String& S )const;
      bool operator>=( const String& S )const;
   /*   bool operator==( const String& S )const;
      bool operator!=( const String& S )const;*/



      String& operator+=( const String& Roperand );
      String& operator+=( const char* cstr );
      String operator+( const String& Roperand )const; // must return a copy
      String operator+( const char* cstr )const;
      String& operator++( ); //adds a space before
      String& operator++( int );// adds a space after

      char& operator[]( size_t index );
      char operator[]( size_t index )const;
      operator const char* ()const {
         return m_data;
      }
   };
   std::ostream& operator<<( std::ostream& ostrLeftOperand, const String& Roperand );
   std::istream& operator>>( std::istream& istrLeftOperand, String& Roperand );
   String operator+( const char* leftOperaand,
      const String& rightOperand );


}
#endif // !SDDS_STRING_H_



