#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   Name::Name(){
      setEmpty();
#ifdef DEBUG
      cout << "defaulting Name" << endl;
#endif // DEBUG
   }
   Name::Name(const char* value){

#ifdef DEBUG
      cout << "Creating name using " << (value&&value[0] ? value : "No Value") << endl;
#endif // DEBUG
     // m_value = nullptr; no need since m_value is initialized
      set(value);
   }
   Name::Name(const char* title, const char* name){
#ifdef DEBUG
      cout << "Creating Name using " << (title ? title : "no title")
         << " " << (name?name:"no name") << endl;
#endif

      set(name);
      m_title = U.aloCpy(title);
   }
   Name::~Name() {
#ifdef DEBUG
      cout << "Deleting " << (m_value?m_value:"Empty Name") << endl;
#endif // DEBUG
      deallocate();
   }
   void Name::setEmpty(){
      m_value = nullptr;
   }
   Name& Name::set(const char* name) {
      deallocate();
      if (name && name[0]) { // name is not null and empty
         m_value = U.aloCpy(name);
      }
      return *this; // is the address of the currect object (Name*)
                    // therefore "*this" become there reference 
                    //       of the current object (Name&)
   }
   Name& Name::set(const Name& N)   {
      if (this != &N) { // prevent self copying 
         deallocate();
         m_title = U.aloCpy(N.m_title);
         m_value = U.aloCpy(N.m_value);
      }
      return *this;
   }
   const char* Name::get()const {
      return m_value;
   }
   std::ostream& Name::display(std::ostream& ostr) const   {
      if (m_title && m_title[0]) ostr << m_title << " ";
      if (m_value && m_value[0]) {
         ostr << m_value;
      }
      else {
         ostr << "No Name";
      }
      return ostr;
   }
   std::istream& Name::read(std::istream& istr){
      deallocate();
      m_value = U.readDynCstr(istr);
      return istr;
   }
   void Name::deallocate(){
      delete[] m_title;
      m_title = nullptr;
      delete[] m_value;
      m_value = nullptr;
   }
}
