#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
namespace seneca {
   struct Utils {
      double getDouble( );
      void getCstr( char* str, size_t len );
   };
   // like a function prototype for instances of types
   extern Utils ut;
   extern const double PI;
}
#endif // !SENECA_UTILS_H
