#include "Name.h"
#include "Utils.h"
namespace sdds{
   Name::Name() { // default or no arg constructor
      setEmpty();
   }
   Name::Name(const char* value){
      setEmpty();
      set(value);
   }
   Name::Name(const char* title, const char* name){
      setEmpty();
      set(name);
      setTitle(title);
   }
   Name::~Name(){
      deallocate();
   }
   bool Name::isEmpty() const{
      return m_value == nullptr || m_value[0] == char(0);
   }
   void Name::setEmpty(){
      m_value = nullptr;
      m_title = nullptr;
   }
   Name& Name::set(const Name& toCopy){
      if (this != &toCopy) { // prevents self copying 
         set(toCopy.m_value);
         setTitle(toCopy.m_title);
      }
      return *this;
   }
   Name& Name::set(const char* name) {
      deallocate();
      if (name && name[0]) {
         m_value = new char[U.strlen(name) + 1];
         U.strcpy(m_value, name);
      }
      return *this;  // reference to the current object
   }
   const char* Name::get() const {
      return m_value;
   }
   std::ostream& Name::display(std::ostream& ostr) const{
      if (m_title && m_title[0]) ostr << m_title << " ";
      if (m_value) {
         ostr << m_value;
      }
      else {
         ostr << "Empty Name!";
      }
      return ostr;
   }
   std::istream& Name::read( std::istream& istr)
   {
      deallocate();
      m_value = U.readDynCStr(istr);
      return istr;
   }
   void Name::deallocate(){
      delete[] m_value;
      m_value = nullptr;
      delete[] m_title;
      m_title = nullptr;
   }
   void Name::setTitle(const char* title){
      delete[] m_title;
      m_title = nullptr;
      if (title && title[0]) {
         m_title = new char[U.strlen(title) + 1];
         U.strcpy(m_title, title);
      }
   }
}
