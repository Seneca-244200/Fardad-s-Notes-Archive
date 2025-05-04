#ifndef SENECA_DOC_H
#define SENECA_DOC_H
#include "Printable.h"
#include "Title.h"
namespace seneca {
   class Doc :
      public Printable {
      Title m_title;
      char* m_author{ };
   public:
      Doc( const char* author, const char* title );
      Doc( const Doc& D );
      Doc& operator=( const Doc& D );
      virtual std::ostream& print( std::ostream& ostr )const;
      /// <summary>
      /// return the number of words in the document
      /// </summary>
      /// <returns>integer value</returns>
 //     virtual size_t wordCount( )const = 0;
      virtual ~Doc( );
   };
}

#endif // !SENECA_DOC_H

