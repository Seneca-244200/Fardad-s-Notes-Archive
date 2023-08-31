#pragma once
#include <iostream>
namespace sdds {
   template <typename T, size_t arSize>
   class Array {
      T m_a[arSize]{};
   public:
      T& operator[]( size_t index ) {
         return m_a[index%arSize];
      }
      const T& operator[]( size_t index )const {
         return m_a[index% arSize];
      }
      size_t size( )const {
         return arSize;
      }
      std::ostream& write( std::ostream& ostr )const {
         for (size_t i = 0; i < size( ); i++ ) {
            ostr << operator[](i);
            if ( i !=  size()-1) ostr << ", ";
         }
         return ostr;
      }
   };

   template <typename T, size_t S>
   std::ostream& operator<<( std::ostream& ostr, const Array<T, S>& A ) {
      return A.write( ostr );
   }

}