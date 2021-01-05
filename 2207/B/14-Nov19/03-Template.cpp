#include <iostream>
using namespace std;
#include "sort.h"
using namespace sdds;

/*
T must be insertable into an istream using operator << 
*/

class Container {
   int m_value;
public:
   Container(int value = 0) {
      m_value = value;
   }
   int value()const {
      return m_value;
   }
   void value(int thevalue) {
      m_value = thevalue;
   }
   bool operator<(const Container& C) {
      return m_value < C.m_value;
   }
   bool operator>(const Container& C) {
      return m_value < C.m_value;
   }
   Container operator+(const Container& C)const {
      return Container(m_value + C.m_value);
   }
};

ostream& operator<<(ostream& ostr, const Container& C) {
   return ostr << "C.value: " << C.value();
}


template <typename T>
void CSVdisplayArray(T d[], int size) {
   for (int i = 0; i < size; i++) {
      if (i) cout << ", ";
      cout << d[i];
   }
   cout << endl;
}

int main() {
   Container* C = new Container[4];
   int ivals[]{ 3,4,5,23,6,4,43 };
   double vals[]{ 2.2,3.3,1.1,5.5,4.4 };
   for (int i = 0; i < 4; i++) {
      C[i].value((i+1) * 10);
   }
   sort(vals, 5);
   CSVdisplayArray(vals, 5);
   sort(ivals, 5, false);
   CSVdisplayArray(ivals, 5);
   sort(C, 4, false);
   CSVdisplayArray(C, 4);
   delete[] C;
   return 0;
}