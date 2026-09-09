#include <iostream>
#include "Bucket.h"
using namespace std;
namespace seneca {
   Bucket::Bucket(double value, double capacity) {
      m_value = value;
      m_capacity = capacity;
   }
   ostream& Bucket::operator~()const {
      cout.setf(ios::fixed);
      cout.precision(2);
      cout << "(" << m_value << "/" << m_capacity << ")";
      return cout;
   }
   // operator overaload are always created using their function form.
   Bucket& Bucket::operator=(const double& value) {
      m_value = value > m_capacity ? m_capacity : value;
      return *this;
   }
   double Bucket::operator+=(double value) {
      double ret{};
      if (m_value + value > m_capacity) {
         ret = (m_value + value) - m_capacity;
         m_value = m_capacity;
      }
      else {
         m_value += value;
      }
      return ret;
   }
   Bucket Bucket::operator+(double value)const {
      Bucket result(m_value + value, m_capacity);
      return result;
   }
   Bucket& Bucket::operator++() {
      operator+=(1);
      return *this;
   }
   // the int is NOT and argument, it is flag to idicate
   // this is a post fix operator
   Bucket Bucket::operator++(int) {
      Bucket old = *this;
      operator+=(1);
      return old;
   }
   // type conversion overload 
   // type cast overload
   Bucket::operator double()const {
      return m_value;
   }
   double Bucket::operator[](int index) const {
      double res{ -1 };
      if (index == 0) res = m_value;
      else if (index == 1) res = m_capacity;
      return res;
   }
   double& Bucket::operator[](int index) {
      double* attrPtr = &junk;
      if (index == 0) attrPtr = &m_value;
      else if (index == 1) attrPtr = &m_capacity;
      return *attrPtr;
   }

   std::ostream& Bucket::display(std::ostream& ostr)const {
      ostr.setf(ios::fixed);
      ostr.precision(1);
      ostr << "Bucket(" << m_value << "/" << m_capacity << ")";
      ostr.unsetf(ios::fixed);
      return ostr;
   }

   std::istream& Bucket::read(std::istream& istr) {
      if (&istr == &cin) {
         cout << "Value: ";
      }
      istr >> m_value;
      if (&istr == &cin) {
         cout << "Capacity: ";
      }
      istr >> m_capacity;
      return istr;
   }

   double operator+=(double& leftOperand, const Bucket& rightOperand) {
      return leftOperand += rightOperand[1]; // index one is the capacity
   }
   ostream& operator<<(ostream& leftOp, const Bucket& rightOp){
      return rightOp.display(leftOp);
   }
   istream& operator>>(istream& leftOp, Bucket& righOp) {
      return righOp.read(leftOp);
   }
}