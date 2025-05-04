#include "Doc.h"
#include "Utils.h"
using namespace std;
namespace seneca {
   Doc::Doc( const char* author, const char* title ): m_author(ut.alocopy(author)), m_title(title) {}

   Doc::Doc( const Doc& D ) :
      m_author( ut.alocopy( D.m_author ) ), m_title( D.m_title ) {}

   Doc& Doc::operator=( const Doc& D ) {
      if ( this != &D ) {
         m_title = D.m_title;
         ut.alocopy( m_author, D.m_author );
      }
      return *this;
   }

   std::ostream& Doc::print( std::ostream& ostr ) const {
      ostr << m_title << std::endl;
      if ( m_author ) {
         ostr << "By " << m_author << std::endl;
      }
      return ostr;
   }

   Doc::~Doc( ) {
      delete[] m_author;
   }

}