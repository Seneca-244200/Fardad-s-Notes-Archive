#include "cstr.h"
#include "TitledName.h"
TitledName::TitledName(const char* title, const char* name):Name(name) {
   if(title) seneca::strcpy(m_title, title, 31);
}

const char* TitledName::get()const {
   return m_title;
}
std::istream& TitledName::read(std::istream& istr) {
   istr.getline(m_title, 32, ' ');
   Name::read(istr);
   return istr;
}

std::ostream& TitledName::print(std::ostream& ostr)const {
   if(m_title && Name::get())
      ostr << m_title << " " << Name::get();
   return ostr;
}
