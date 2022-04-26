#include <iostream>
#include "Mark.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
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
   Container& add(int value) {
      m_value += value;
      return *this;
   }
   //   C = D.add(E);
   Container& add(const Container& R) {
      this->m_value += R.m_value;
      return *this;
   }
   //C = D.sum(E);
   Container sum(const Container& R)const {  // I don't want it to have sideeffect (changing the owner; ie *this)
      Container theSum(this->m_value + R.m_value);
      return theSum;
   }
   //Container average(const Container& R)const { 
   //   Container theAverage((this->m_value + R.m_value)/2);
   //   return theAverage;
   //}
   bool isEmpty()const {
      return m_value <= 0;
   }
 //  friend Container average(const Container& left, const Container& right);
};
// helper fucntion 
Container average(const Container& left, const Container& right) {
   Container theAver((left.get() + right.get()) / 2);
   return theAver;
}


void IsContainerEmpty(const Container& C) {
   if (C.isEmpty()) {
      cout << "Container is empty!" << endl;
   }
   else {
      cout << "Container is not empty!" << endl;
   }
}
void displayAll(const char* prompt,
   const Container& C,
   const Container& D,
   const Container& E) {
   cout << prompt << endl;
   cout << "C: ";
   C.display();
   cout << " D: ";
   D.display();
   cout << " E: ";
   E.display() << endl;
}
int main() {
   Container C;
   Container D(200);
   Container E(300);
   displayAll("before sum", C, D, E);
   C = D.sum(E);
   displayAll("after sum", C, D, E);
   C = D.add(E);
   displayAll("after add", C, D, E);
   C = average(D,E);
   displayAll("after average", C, D, E);
   return 0;
}

