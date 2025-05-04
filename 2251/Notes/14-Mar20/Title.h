#ifndef SENECA_TITLE_H
#define SENECA_TITLE_H
#include "Printable.h"
namespace seneca {
   class Title :
      public Printable {
      char* m_title{};
   public:
      Title( const char* title = "" );
      Title( const Title& T );
      Title& operator=( const Title& T );
      virtual std::ostream& print( std::ostream& ostr )const;
      virtual ~Title( );
   };
}

#endif // !SENECA_TITLE_H

