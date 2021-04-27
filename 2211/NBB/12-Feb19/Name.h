#pragma once
#ifndef NAME_H__
#define NAME_H__
#include <iostream>
class Name {
   char* m_data;//  = nullptr;
   void init();
public:
   Name();
   Name(const char* value);
   Name& set(const char* value);
   Name& operator=(const char* value);
   std::ostream& 
      display(std::ostream& ostr = std::cout)const;
   std::istream& 
      read(std::istream& istr = std::cin);

   // Rule of three must be followed for any class holding recourses
   // outside of its scope
   // copy constructor
    Name(const Name& copyFrom); // either constructor
   //Name(const Name& copyFrom) = delete; // prevention
   // copy assignment
    Name& operator=(const Name& copyFrom);
    // Name& operator=(const Name& copyFrom) = delete;
   // destructor
   ~Name();
};

istream& operator>>(istream& left, Name& right);
ostream& operator<<(ostream& leftcout,const Name& right);

#endif // !NAME_H__


