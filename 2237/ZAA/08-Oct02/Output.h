#pragma once
#ifndef SDDS_OUTPUT_H
#define SDDS_OUTPUT_H
namespace sdds {
   class Output {
   public:
      Output& print( int value );
      Output& print( double value );
      Output& print( const char* cStr );
   };
}
#endif // !SDDS_OUTPUT_H


