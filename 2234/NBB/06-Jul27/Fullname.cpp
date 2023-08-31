#include "Utils.h"
#include "Fullname.h"
namespace sdds {
   Fullname::Fullname( const char* firstname, 
      const char* lastname ):Name(firstname) {
      if ( lastname && lastname[0] ) {
         ut.strAloCpy( m_lastname, lastname );
      }
   }
/* Although this will work, but you will have
*  an extra dyn mem allocation for name for no reason
   Fullname::Fullname( const Fullname& Fn ):Name(Fn) {
      operator=( Fn );
   }
*/
   //Fullname::Fullname( const Fullname& Fn ):Name(Fn) {
   //   ut.reStrAloCpy( m_lastname, Fn.m_lastname );
   //}

   Fullname& Fullname::operator=( const Fullname& Fn ) {
      if ( this != &Fn ) {
         Name::operator=( Fn );
         ut.reStrAloCpy( m_lastname, Fn.m_lastname );
      }
      return *this;
   }

   Fullname::~Fullname( ) {
      delete[] m_lastname;
   }

   std::ostream& Fullname::write( std::ostream& ostr ) const {
      return Name::write( ostr )
         << " " << (m_lastname ? m_lastname : "No Lastname");
   }

   std::istream& Fullname::read( std::istream& istr , char delim) {
      Name::read( istr, ' ' );
      m_lastname = ut.read( istr, delim );
      return istr;
   }



}