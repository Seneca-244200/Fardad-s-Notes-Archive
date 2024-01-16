#pragma once
#ifndef SDDS_OUTPUT_H
#define SDDS_OUTPUT_H
namespace sdds {
   class Output {
   public:
      Output& operator<<( int value );
      Output& operator<<( double value );
      Output& operator<<( const char* cStr );

   };
}
#endif // !SDDS_OUTPUT_H


