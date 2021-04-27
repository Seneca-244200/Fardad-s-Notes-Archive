#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Name.h"
#define SDDS_DEBUG
using namespace std;
namespace sdds {
   //Name::Name() {  // default constructor
   //   cout << "Def Const" << endl;
   //   init();
   //}
   Name::Name(const char* thename) {
#ifdef  SDDS_DEBUG
      cout << "Createing Name with " << thename << endl;
#endif

      //Name(thename, 1000);  // this is WORNG dont' do it
      init();
      setName(thename);
   }
   Name::Name(const char* thename, int maxLen) {
#ifdef  SDDS_DEBUG
      cout << "Createing name with maximum of " << maxLen << " chars" << endl;
#endif
      int len = strlen(thename) > (size_t)maxLen ? maxLen : strlen(thename);
      m_value = new char[len + 1];
      strncpy(m_value, thename, len);
      m_value[len] = 0;
   }
   Name::~Name() {
#ifdef  SDDS_DEBUG
      cout << "deleting ";
#endif
      print() << endl;
      deallocate();
   }
   void Name::init() {
      m_value = nullptr;
   }
   void Name::setEmpty() {
      delete[] m_value;
      m_value = nullptr;
   }
   void Name::setName(const char* value) {
      m_value = new char[strlen(value) + 1];
      strcpy(m_value, value);
   }

   std::ostream& Name::print(std::ostream& ostr) const {
      if (m_value) { 
         ostr << m_value;
      }
      else { // safe empty state
         ostr << "No Name";
      }
      return ostr;
   }

   void Name::deallocate() {
      delete[] m_value;
      m_value = nullptr;
   }

}