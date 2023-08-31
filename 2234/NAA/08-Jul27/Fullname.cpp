#include "Utils.h"
#include "Fullname.h"
namespace sdds {
   Fullname::Fullname( const char* first, const char* last )
         :Name(first) {
      if ( last && last[0] ) {
         ut.aloCpy( m_lastName, last );
      }
   }

   Fullname::Fullname( const Fullname& FN ) {//Name is defaulted having nullptr as attribute an overwritten by opeator=
      operator=( FN );
   }
  /* Fullname::Fullname( const Fullname& FN ):Name(FN) {
      ut.aloCpy( m_lastName, FN.m_lastName );
   }*/
   Fullname& Fullname::operator=( const Fullname& FN ) {
      if ( this != &FN ) {
         Name::operator=( FN );
         ut.reAloCpy( m_lastName, FN.m_lastName );
      }
      return *this;
   }
   std::ostream& Fullname::write( std::ostream& ostr ) const {
      return Name::write( ostr ) << " " << (m_lastName ? m_lastName : " No Lastname");
   }
   Fullname::~Fullname( ) {
      delete[] m_lastName;
   }

   std::ostream& Fullname::call(std::ostream& ostr ) {
      return m_lastName ? Fullname::write( ostr ) : Name::write(ostr);
   }

}