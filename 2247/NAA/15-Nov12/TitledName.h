#ifndef SENECA_TITLEDNAME_H
#define SENECA_TITLEDNAME_H
#include "Name.h"
#include "Utils.h"
namespace seneca {
   class TitledName :
      public Name {
      char* m_title{};
   public:
      TitledName( ) = default;
      TitledName( const char* title, const char* name );
      TitledName( const TitledName& other );
      TitledName& operator=( const TitledName& other );
      virtual ~TitledName( );
      virtual std::ostream& display( std::ostream& ostr )const;
      virtual std::istream& read( std::istream& istr );
      virtual operator bool( ) const;

   };
}
#endif // !SENECA_TITLEDNAME_H


