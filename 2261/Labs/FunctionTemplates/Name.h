#ifndef SENECA_NAME_H
#define SENECA_NAME_H

#include <iostream>

namespace seneca {

   class Name {
      char m_value[41]{};
   public:
      Name(const char* value = "");

      bool equal(const Name& other) const;

      const char* get() const;
   };

   std::ostream& operator<<(std::ostream& ostr, const Name& N);

}

#endif