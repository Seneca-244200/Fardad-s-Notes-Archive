#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
#include <iostream>
namespace seneca {
   struct Utils {
      double getDouble( );
      void getCstr( char* str, size_t len );
      bool getCstr( char*& str, std::istream& istr = std::cin );
      bool getCstr( char*& str, std::istream& istr, char delimiter );
      bool yes( const char* prompt = nullptr);

      //DMA
      void aloCopy( char*& des, const char* src );
      void aloCopy( char*& des, const char* src , size_t len);
      // end DMA

      size_t strlen( const char* str );
      char* strcpy( char* des, const char* src );
      char* strcpy( char* des, const char* src, size_t len );
      char* strcat( char* des, const char* src );

   };
   // like a function prototype for instances of types
   extern Utils ut;
   extern const double PI;
}
#endif // !SENECA_UTILS_H
