// Final Project Milestone 4
// Error Massage class
// File ErrorMessage.h
// Version 1.0
// Date 2015/04/07
// Author Fardad Soleimanloo
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// Fardad             2015/04/07           Preliminary release
/////////////////////////////////////////////////////////////////
#ifndef __244_ERRORMESSAGE_H__
#define __244_ERRORMESSAGE_H__
#include <iostream>

class ErrorMessage{
  char _message[81];
public:
  ErrorMessage();
  virtual ~ErrorMessage();
  void clear();
  bool isClear()const;
  void message(const char* value);
  const char* message()const;
};
std::ostream& operator<<(std::ostream& os,const ErrorMessage& M);
#endif

