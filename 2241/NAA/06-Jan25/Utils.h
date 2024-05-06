#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
namespace seneca {
   struct Utils {
      int getInt( );
      void getCstr( char* str, size_t len );
   };
   extern Utils ut; // protoype for the ut inside Utils.cpp
}
#endif // !SENECA_UTILS_H


