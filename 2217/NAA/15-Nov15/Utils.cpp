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
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <cstring>
#include "Utils.h"
namespace sdds {
   void Utils::alloCopy(char*& des, const char* src) {
      delete[] des;
      des = new char[strlen(src) + 1];
      strcpy(des, src);
   }
}