#include "cstr.h"
#include "Bar.h"
using namespace std;
namespace seneca {
   Bar::Bar(const char* title, size_t value){
      if (title) {
         strcpy(m_title, title, 50);
         if (value <= 79) {
            m_value = value;
         }
         else {
            m_title[0] = char(0);  //safe empty state
         }
      }
   }

   Bar::operator const char* () const{
      return m_title;
   }

   Bar& Bar::operator=(const char* title)
   {
      if (title) {
         strcpy(m_title, title, 50);

      }
      else {
         m_title[0] = char(0); // safe empty state
      }
      return *this;
   }

}
