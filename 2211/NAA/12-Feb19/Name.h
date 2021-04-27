#pragma once
#ifndef NAME_H__
#define NAME_H__
#include <iostream>
class Name {
//   char* m_data = nullptr;
   char* m_data;
   void init();
public:
   Name();
   Name(const char* value);
   // Rule of three applies when the class
   // points to resources outside of its scope
   // in ANY WAY
   // copy constructor
   Name(const Name& copyFrom); // either implement it 
   //Name(const Name& copyFrom) = delete;;  // or prevent it
   // copy assignment
   Name& operator=(const Name& righOper);
   // desturctor
   ~Name();

   Name& set(const char* value);
   Name& operator=(const char* value);
   std::ostream& display(std::ostream& ostr = std::cout)const;
   std::istream& read(std::istream& istr = std::cin);


};

std::istream& operator>>(std::istream& istr, Name& righOper);
std::ostream& operator<<(std::ostream& ostr, const Name& rightOper);
#endif // !NAME_H__


