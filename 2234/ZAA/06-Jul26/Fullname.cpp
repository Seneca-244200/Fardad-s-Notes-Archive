#include "Utils.h"
#include "Fullname.h"
namespace sdds {
   Fullname::Fullname( const char* first, const char* last ) :Name{ first } {
      if ( last ) {
         ut.aloCpy( m_lastname, last );
      }
      else {
         ut.aloCpy( m_lastname, "No Lastname" );
      }
   }
   Fullname::Fullname( const Fullname& Fn ) :Name( Fn ) {
      ut.aloCpy( m_lastname, Fn.m_lastname );
   }
   //Fullname::Fullname( const Fullname& Fn )  { // Name is defaulted and reallcates over "No Name"
   //   operator=( Fn );
   //}
   Fullname& Fullname::operator=( const Fullname& FN ) {
      if ( this != &FN ) {
         Name::operator=( FN );
         ut.reAloCpy( m_lastname, FN.m_lastname );
      }
      return *this;
   }
   Fullname::~Fullname( ) {
      delete[] m_lastname;
   }
   std::ostream& Fullname::write( std::ostream& ostr ) const {
      return Name::write( ostr ) << " " << m_lastname;
   }
}