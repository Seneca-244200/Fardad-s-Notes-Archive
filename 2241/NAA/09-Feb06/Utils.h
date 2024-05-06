#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
#include <iostream>
namespace seneca {
   const size_t MAX_DYNAMIC_READ  =  1024;
   struct Utils {
      size_t strlen( const char* str );
      //cString Stuff
      char* strcpy( char* des, const char* src );
      char* strcpy( char* des, const char* src, size_t len );
      char* strcat( char* des, const char* src );


      // DMA stuff
      void aloCopy( char*& des, const char* src );
      void aloCopy( char*& des, const char* src , size_t maxLen);


      // foolproof entries
      int getInt( );
      void getCstr( char* str, size_t len );
      bool getDynCstr( char*& str, std::istream& istr = std::cin, char delimiter = '\n' );
      bool yes( const char* prompt = nullptr );
   };
   extern Utils ut; // protoype for the ut inside Utils.cpp
}
#endif // !SENECA_UTILS_H


