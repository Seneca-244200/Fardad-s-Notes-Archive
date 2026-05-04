#pragma once
#include <iostream>
#include "Readable.h"
class Name: public Readable {
   char* m_value{};
public:
   //explicit will not allow = at the moment of creation
   // explicit Name(const char* name = nullptr);
   Name(const char* name = nullptr);
   // Rule of three
   Name(const Name& other);
   Name& operator=(const Name& other);
   ~Name();
   Name& operator=(const char* name);
   const char* get()const; 
   virtual std::istream& read(std::istream& istr);
   virtual std::ostream& print(std::ostream& ostr);
};


