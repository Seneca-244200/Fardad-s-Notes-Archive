#include <iostream>
#include "Name.h"
class Title : public Name {
   char m_title[41];
public:
   Title(const char* name, const char* title);
   Title(const Title& T);
   std::ostream& display(std::ostream& os)const;
};
std::ostream& operator<<(std::ostream&os, const Title& T);