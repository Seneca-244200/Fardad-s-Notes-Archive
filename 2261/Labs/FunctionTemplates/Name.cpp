#include "Name.h"

namespace seneca {

   Name::Name(const char* value) {
      int i = 0;
      while (value && i < 40 && value[i] != '\0') {
         m_value[i] = value[i];
         i++;
      }
      m_value[i] = '\0';
   }

   bool Name::equal(const Name& other) const {
      int i = 0;
      while (m_value[i] != '\0' && other.m_value[i] != '\0' && m_value[i] == other.m_value[i]) {
         i++;
      }
      return m_value[i] == other.m_value[i];
   }

   const char* Name::get() const {
      return m_value;
   }

   std::ostream& operator<<(std::ostream& ostr, const Name& N) {
      return ostr << N.get();
   }

}