#include <iostream>
#include "Mark.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
// this is a Bad design for a Container that needs a friend.
class Container {
   int m_value;
public:
   Container(int value = 0) {
      set(value);
   }
   // modifier
   Container& set(int value) {
      m_value = value;
      return *this;
   }
   //// query
   int get()const {
      return m_value;
   }
   // queries are always const (99.999% of the item)
   ostream& display(ostream& ostr = cout)const {
      ostr << "Cn:[";
      ostr.width(9);
      ostr.fill('.');
      ostr.setf(ios::right);
      ostr << m_value;
      ostr.fill(' ');
      ostr.unsetf(ios::right);
      ostr << "]";
      return ostr;
   }
   istream& read(istream& istr = cin) {
      m_value = getint("Container value: ", istr);
      return istr;
   }
   // C = D.add(10);
   Container& operator+=(int value) {
      m_value += value;
      return *this;
   }
   //   C = D.add(E);
   Container& operator+=(const Container& R) {
      this->m_value += R.m_value;
      return *this;
   }
   //C = D.sum(E);
   // I don't want it to have sideeffect (changing the owner; ie *this)
   Container operator+(const Container& R)const {  
      Container theSum(this->m_value + R.m_value);
      return theSum;
   }
   //Container average(const Container& R)const { 
   //   Container theAverage((this->m_value + R.m_value)/2);
   //   return theAverage;
   //}
   bool operator!()const {
      return m_value <= 0;
   }
   
};
// helper fucntion BAD BAD don't do this
Container average(const Container& left, const Container& right) {
   Container theAver((left.get() + right.get()) / 2);
   return theAver;
}


void IsContainerEmpty(const Container& C) {
   if (!C) {
      cout << "Container is empty!" << endl;
   }
   else {
      cout << "Container is not empty!" << endl;
   }
}
ostream& operator<<(ostream& leftOperand, const Container& rightOperand) {
   rightOperand.display(leftOperand);
   return leftOperand;
}

istream& operator>>(istream& LO, Container& RO) {
   return RO.read(LO);
}

int main() {
   Container C;
   Container D(200);
   Container E(300);
   IsContainerEmpty(C);
   IsContainerEmpty(D);
   IsContainerEmpty(E);
   cout << "enter container value: ";
   cin >> C;
   cout << "Before +" << endl << "C: " << C << " D: " << D << " E: " << E << endl;
   C = D + E;
   //C = D.operator+(E);
   cout << "after +" << endl << "C: " << C << " D: " << D << " E: " << E << endl;

   C = D += E;
   //C = D.operator+=(E);
   cout << "after -=" << endl << "C: " << C << " D: " << D << " E: " << E << endl;
   //C = D av E;
   C = average(D,E);
   cout << "after average" << endl << "C: " << C << " D: " << D << " E: " << E << endl;
   D += 10;
   //D.operator+=(10);
   cout << "After += int" << endl << "C: " << C << " D: " << D << " E: " << E << endl;
   return 0;
}

