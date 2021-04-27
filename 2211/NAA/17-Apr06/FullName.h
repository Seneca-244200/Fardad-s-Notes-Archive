#pragma once
#include "Name.h"
class FullName : public Name {
   char* m_lastName = nullptr;
public:
   FullName(const char* name = nullptr, const char* lastname = nullptr);
   FullName(const FullName& fn);
   FullName& operator=(const FullName& fn);
   virtual ~FullName();
   virtual void display(std::ostream& ostr = std::cout)const;
};

