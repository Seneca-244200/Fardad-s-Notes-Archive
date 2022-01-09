#ifndef SDDS_IOTOOLS_H_
#define SDDS_IOTOOLS_H_
// #include <cstdio> // avoid including in header files unless really needed
// using namespace std; // wrong - cause resubmit "NEVER DO THIS"
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

