#include "Title.h"
#include "Utils.h"
namespace seneca {
   Title::Title( const char* title ) {
      ut.alocopy( m_title, title );
   }
   Title::Title( const Title& T ) {
      // just allocated
      m_title = ut.alocopy( T.m_title );
   }
   Title& Title::operator=( const Title& T ) {
      if ( this != &T ) {
         // first delete then allocate
         ut.alocopy( m_title, T.m_title );
      }
      return *this;
   }
   std::ostream& Title::print( std::ostream& ostr ) const {
      if ( m_title ) ostr << m_title;
      return ostr;
   }
   Title::~Title( ) {
      delete[] m_title;
   }
}
