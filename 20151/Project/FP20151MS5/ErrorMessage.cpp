// Final Project Milestone 4
// Error Massage class
// File ErrorMessage.cpp
// Version 1.0
// Date 2015/04/07
// Author Fardad Soleimanloo
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
// Fardad             2015/04/07           Preliminary release
/////////////////////////////////////////////////////////////////
#include "ErrorMessage.h"
#include <cstring>

ErrorMessage::ErrorMessage(){  // sets messaage to an empty string
  _message[0] = 0;
}


ErrorMessage::~ErrorMessage(){}


void ErrorMessage::clear(){   // clears the message to an empty string
  _message[0] = 0;
}


bool ErrorMessage::isClear()const{  // returns true if the message is empty ( NO Error)
  return _message[0] == 0;
}


void ErrorMessage::message(const char* value){  // copies the value string into the _message string (sets the error message)
  std::strncpy(_message, value, 80);
  _message[80] = 0;
}

const char* ErrorMessage::message()const{  // returns the error message
  return _message;
}

std::ostream& operator<<(std::ostream& os,const ErrorMessage& M){   // prints the ErrorMessage object using ostream
  return os << M.message();
}