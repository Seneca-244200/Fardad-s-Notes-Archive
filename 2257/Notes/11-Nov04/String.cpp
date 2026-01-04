#include <iostream>
#include "cstr.h"
#include "String.h"
using namespace std;
namespace seneca {
    void String::aloCpy(const char* data){
        delete[] m_data;
        if (data) {
            m_data = new char[(m_size=strlen(data)) + 1];
            strcpy(m_data, data);
        }
        else {
            setEmpty();
        }
    }
    void String::setEmpty(){
        delete[] m_data;
        m_size = 0;
        m_data = new char[1] {};
    }
    String::String(){
        setEmpty();
    }
    String::String(const char* data){
        aloCpy(data);
    }
    String::String(const String& other){
            aloCpy(other.m_data);
    }
    String& String::operator=(const String& other) {
        if (this != &other) {
            aloCpy(other.m_data);
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