#ifndef SDDS_IOTOOLS_H_
#define SDDS_IOTOOLS_H_
//#include <cstdio>  only include in a header file if it is absolutly needed
namespace sdds {


   void keybFlush();
   int getStr(char* str, int maxlen);
   int getInt();
   double getDouble();
   int getLimInt(int lowerLimit, int upperLimit);
   double getLimDbl(double lowerLimit, double upperLimit);
   int yes();






}

#endif // !SDDS_IOTOOLS_H_



