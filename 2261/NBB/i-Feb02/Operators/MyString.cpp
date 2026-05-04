#include <iostream>
#include "MyString.h"
#include "cstr.h"
using namespace std;
namespace seneca {
    MyString::MyString(const char* str){
       strcpy(m_data, str, MAX_STRING_SIZE);
    }
    std::ostream& MyString::display(std::ostream& ostr) const{
       ostr << m_data;
       return ostr;
    }
    std::istream& MyString::read(std::istream& istr){
       istr.getline(m_data, MAX_STRING_SIZE + 1);
       return istr;
    }
    MyString& MyString::operator+=(const MyString& other){
       if (length() + other.length() < MAX_STRING_SIZE) {
          strcat(m_data, other.m_data);
       }
       return *this;
    }
    MyString& MyString::operator=(const char* c_str){
       strcpy(m_data, c_str, MAX_STRING_SIZE);
       return *this;
    }
    MyString MyString::operator+(const MyString& other) const{
       MyString both = *this;
       return both += other;
    }
    MyString& MyString::operator++() {
       // instead of this, make sure size is ok
       // and then shift chars to right, setting
       // the first to space
       MyString temp = " ";
       temp += *this;
       *this = temp;
       return *this;
    }
    char& MyString::operator[](int index){
       return m_data[index % length()];
    }
    const char& MyString::operator[](int index) const{
       return m_data[index % length()];
    }
    MyString::operator const char* () const{
       return m_data;
    }
    MyString& MyString::operator++(int) {
       MyString space = " ";
       (*this) += space;
       return *this;
    }
    int MyString::length()const {
       return strlen(m_data);
    }
    // Implementation of MyString class goes here
}