#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
namespace seneca {
   const size_t MAX_DYNAMIC_READ  =  1024;
   struct Utils {
      size_t strlen( const char* str );
      char* strcpy( char* des, const char* src );
      char* strcpy( char* des, const char* src, size_t len );

      int getInt( );
      void getCstr( char* str, size_t len );
      /// <summary>
      /// Dynamically reads from cin, str must be deleted before and after usage
      /// </summary>
      /// <param name="str">: points to dynamic value enter from user</param>
      /// <returns>success</returns>
      bool getCstr( char*& str );
      bool yes( const char* prompt = nullptr );
   };
   extern Utils ut; // protoype for the ut inside Utils.cpp
}
#endif // !SENECA_UTILS_H


