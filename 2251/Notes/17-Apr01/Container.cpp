#include <iostream>
#include "Container.h"
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
   std::ostream& operator<<( std::ostream& ostr, const Container& C ) {
      return C.display( ostr );
   }
   
}

