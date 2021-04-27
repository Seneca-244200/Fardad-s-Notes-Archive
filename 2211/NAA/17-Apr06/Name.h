#pragma once
#include <iostream>
class Name {
   char* m_value = nullptr;
public:
   Name(const char* value = nullptr);
   Name(const Name& N);
   Name& operator=(const Name& N);
   virtual ~Name();
   virtual void display(std::ostream& ostr = std::cout)const;
};
std::ostream& operator<<(std::ostream& ostr, const Name& N);

