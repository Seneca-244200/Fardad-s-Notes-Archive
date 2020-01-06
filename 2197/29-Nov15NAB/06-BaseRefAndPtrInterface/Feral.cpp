#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Feral.h"
using namespace std;
namespace sdds {
   Feral::Feral(int tagNo) :m_tagNo(tagNo) {
      cout << "Creating " << this->tag() << " the Feral" << endl;
   }
   int Feral::tag()const {
      return m_tagNo;
   }
   Feral::operator bool()const {
      return !isEmpty();
   }
   void Feral::tag(int tagNo) {
      m_tagNo = tagNo;
   }
   void Feral::setEmpty() {
      m_tagNo = 0;
   }
   bool Feral::isEmpty()const {
      return m_tagNo == 0;
   }

   void Feral::move()const {
      display();
      cout << " is moving" << endl;
   }
   void Feral::act()const {
      display();
      cout << " is wild" << endl;
   }
   void Feral::sound()const {
      display();
      cout << " sound scary" << endl;
   }
   std::ostream& Feral::display(std::ostream& os)const {
      return os << "Feral tag no " << tag() ;
   }
   std::istream& Feral::read(std::istream& is) {
      is >> m_tagNo;
      return is;
   }

}