#ifndef SENECA_NAME_H
#define SENECA_NAME_H
#include <iostream>
namespace seneca {

   class Name {
      char* m_name{};
   public:
      Name( ) = default;
      Name( const char* name );
      Name( const Name& other );
      Name& operator=( const Name& other );
      virtual ~Name( );
      virtual std::ostream& display( std::ostream& ostr )const;
      virtual std::istream& read( std::istream& istr );
      virtual operator bool( ) const;
   };
   std::ostream& operator<<( std::ostream& ostr, const Name& N );
   std::istream& operator>>( std::istream& istr, Name& N );
}

#endif // !SENECA_NAME_H


