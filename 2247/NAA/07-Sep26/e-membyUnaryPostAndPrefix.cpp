#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container(int value = 0) {
      m_value = value;
   }
   int value()const {
      return m_value;
   }
   // Query
   Container operator+(const Container& arg)const {
      Container retCont(m_value + arg.m_value);
      //m_value = 10; cannot since the sum is cons
      return retCont;
   }
   // Modifier
   Container& operator+=(const Container& arg) {
      m_value += arg.m_value;
      return *this;
   }
   ostream& display(ostream& ostr = cout)const {
      return ostr << m_value;
   }
   //Query
   Container minus()const {
      Container retCont(-m_value);
      return retCont;
   }
   // Query
   Container operator-()const {
      Container retCont(-m_value);
      return retCont;
   }
   // modifier
   Container& reduceByOne() {
      m_value--;
      return *this;
   }
   Container& operator--() {
      m_value--;
      return *this;
   }
   // This does not work like postfix ++
   // if operator++ is to be a POSTFIX operator, you must add an int in arg list
   /*Container& operator++(int) { 
      m_value++;
      return *this;
   }
   */
   Container operator++(int) {
      Container old = *this; // copy the old value
      m_value++;
      return old;
   }
};

int main() {
   cout << "OOP244 NAA - 07-Sep26" << endl;
   Container C = 200; // assingment at the moment of creation is a call to a ONE agruement constructor
   Container D;
   int i = 199, j;
   D = --C;
   D.display() << endl;
   C.display() << endl;
   cout << "------------------" << endl;
   j = 199;
   i = j++;
   cout << i << endl;
   cout << j << endl;
   cout << "------------------" << endl;

   D = C++; 
   D.display() << endl;
   C.display() << endl;

   return 0;
}