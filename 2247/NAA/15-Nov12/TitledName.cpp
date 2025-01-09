#include "TitledName.h"
namespace seneca {
   TitledName::TitledName( const char* title, const char* name ) :Name{ name }, m_title{ ut.alocpy( title ) } {
      // m_title = ut.alocpy( title ); // set or initialize!
   }

   TitledName::TitledName( const TitledName& other ) :Name{ other }, m_title{ ut.alocpy( other.m_title ) } {
   }

   TitledName& TitledName::operator=( const TitledName& other ) {
      if ( this != &other ) {
         Name::operator=( other );
         ut.alocpy( m_title, other.m_title );
      }
      return *this;
   }

   TitledName::~TitledName( ) {
      delete[] m_title;
   }

   std::ostream& TitledName::display( std::ostream& ostr ) const {
      if ( m_title ) ostr << m_title << " ";
      return Name::display( ostr );
   }

   std::istream& TitledName::read( std::istream& istr ) {
      char* buffer = new char[1024];
      istr.getline( buffer, 1024, ',' );
      if ( istr ) {
         if ( Name::read( istr ) ) {
            ut.alocpy( m_title, buffer );
         }
      }
      delete[] buffer;
      return istr;
   }

   TitledName::operator bool( ) const {
      return Name::operator bool( );
   }

}