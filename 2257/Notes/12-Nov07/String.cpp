#include <iostream>
#include "cstr.h"
#include "String.h"
using namespace std;
namespace seneca {



    String::String(const char* data){
       if (data) {
          m_data = new char[(m_size = strlen(data)) + 1];
          strcpy(m_data, data);
       }
    }
    String::String(const String& other){
       if (other.m_data) {
          m_data = new char[(m_size = strlen(other.m_data)) + 1];
          strcpy(m_data, other.m_data);
       }

    }
    String& String::operator=(const String& other) {
       delete[] m_data;
       if (this != &other) {
          if (other.m_data) {
             m_data = new char[(m_size = strlen(other.m_data)) + 1];
             strcpy(m_data, other.m_data);
          }
       }
       return *this;
    }
    String::~String(){
        delete[] m_data;
    }
    String::operator bool() const {
        return m_data != nullptr;
    }
    ostream& String::display(ostream& ostr)const {
       if(*this) ostr << m_data;
      return ostr;
   }

    std::ostream& operator<<(std::ostream& ostr, const String& right){
        return right.display(ostr);
    }

}