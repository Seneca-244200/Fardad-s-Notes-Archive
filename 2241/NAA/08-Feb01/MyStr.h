#ifndef SENECA_MYSTR_H
#define SENECA_MYSTR_H
#include <iostream>
// using namespace std; DO NOT DO THIS
namespace seneca {
   class MyStr {
      char* m_data;
   public:
      MyStr( const char* cString, size_t maxLen );
      MyStr( const char* cString );
      MyStr( );
      ~MyStr( );
      MyStr& set( const char* cString );
      MyStr& cat( const char* cString );
      std::ostream& print( )const;
   };
}
#endif // !SENECA_MYSTR_H


