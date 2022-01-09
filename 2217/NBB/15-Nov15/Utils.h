/***********************************************************************
// OOP244
//
// File	Utils.cpp
// Version 1.0
// Date	2021/11/15
// Author	Fardad Soleimanloo
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
/////////////////////////////////////////////////////////////////
***********************************************************************/
#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__
#include <iostream>
namespace sdds {
   const unsigned int ReadBufferSize = 10;
   struct Utils {
   public:
      Utils() = delete;
      static void alloCopy(char*& des, const char* src);
   };
}
#endif // !
