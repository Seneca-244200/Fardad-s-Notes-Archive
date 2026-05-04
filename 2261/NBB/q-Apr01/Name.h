#pragma once
#include <iostream>
#include "Readable.h"
class Name: public Readable {
   char* m_value{}; //0-  = nullptr  makes the reusabe code "reusable"
public:
   //explicit will not allow = at the moment of creation
   // explicit Name(const char* name = nullptr);
   Name(const char* name);
   // Rule of three
   Name(const Name& other);
   Name& operator=(const Name& other);
   ~Name();
   Name& operator=(const char* name);
   const char* get()const; 
   virtual std::istream& read(std::istream& istr=std::cin);
   virtual std::ostream& print(std::ostream& ostr=std::cout);
};


