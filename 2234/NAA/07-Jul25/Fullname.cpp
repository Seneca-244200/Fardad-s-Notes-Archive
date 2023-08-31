#include "Utils.h"
#include "Fullname.h"
namespace sdds {



   Fullname::Fullname( const char* first, const char* last ):Name(first) {
      if ( last ) {
         ut.aloCpy( m_lastName, last );
      }
      else {
         ut.aloCpy( m_lastName, "No last name" );
      }
   }

   //Fullname::Fullname( const Fullname& FN ) {//Name is defaulted an overwritten by opeator=
   //   operator=( FN );
   //}
   Fullname::Fullname( const Fullname& FN ):Name(FN) {
      ut.aloCpy( m_lastName, FN.m_lastName );
   }
   Fullname& Fullname::operator=( const Fullname& FN ) {
      if ( this != &FN ) {
         Name::operator=( FN );
         ut.reAloCpy( m_lastName, FN.m_lastName );
      }
      return *this;
   }
   std::ostream& Fullname::write( std::ostream& ostr ) const {
      return Name::write( ostr ) << " " << m_lastName;
   }
   Fullname::~Fullname( ) {
      delete[] m_lastName;
   }

}