#include <iostream>
class Name {
   char* m_data;
public:
   Name(const char* name);
   Name(const Name& N);
   operator const char*()const;
   virtual ~Name();
};
std::ostream& operator<<(std::ostream& os, const Name& N);