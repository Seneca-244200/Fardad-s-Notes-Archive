#include "Container.h"
#include <iostream>
using namespace std;
namespace seneca {
   Container::Container(int data) :m_data{ data } {};
   Container Container::operator+(const Container& Ro)const {
      return Container(m_data + Ro.m_data);
   }
   int Container::volume() const {
      return m_data;
   }
   ostream& Container::display(ostream& os)const {
      return os << "Cn: " << m_data;
   }

}
