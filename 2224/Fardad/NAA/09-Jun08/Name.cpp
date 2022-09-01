#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   bool Name::isEmpty()const {
      return m_value == nullptr;
   }
   Name::Name() {
      //setEmpty(); redundant since m_value is initialzed to null in the class
   }

   Name::Name(const char* value){
      //setEmpty(); redundant since m_value is initialzed to null in the class
      set(value);
   }

   Name::Name(const char* title, const char* name){
      //setEmpty(); redundant since m_value is initialzed to null in the class
      m_title = U.aloCopy(title);
      m_value = U.aloCopy(name);
   }

   Name::~Name() {
      deallocate();
   }

   void Name::setEmpty(){
      m_value = nullptr;
      m_title = nullptr;
   }

   Name& Name::set(const char* value){
      deallocate();
      m_value = U.aloCopy(value);
      // the type of this is Name*
      return *this;
   }

   Name& Name::set(const Name& toCopy) {
      if (this != &toCopy) {
         deallocate();
         if (toCopy.m_value && toCopy.m_value[0]) {
            m_value = new char[U.strlen(toCopy.m_value) + 1];
            U.strcpy(m_value, toCopy.m_value);
         }
      }
      return *this;
   }

   const char* Name::get() const{
      return m_value;
   }

   std::ostream& Name::display(std::ostream& ostr) const {
      if (m_title && m_title[0]) ostr << m_title << " ";
      if (m_value && m_value[0]) {
         ostr << m_value;
      }
      else {
         ostr << "No Name";
      }
      return ostr;
   }

   istream& Name::read(istream& istr){
      deallocate();
      m_value = U.readDyncStr(istr);
      return istr;
   }

   void Name::deallocate() {
      delete[] m_title;
      m_title = nullptr;
      delete[] m_value;
      m_value = nullptr;
   }

}
