#include <iostream>
#include "bbl_sort.h"
using namespace std;
using namespace seneca;
class Container {
   int m_value{};
public:
   int value() const {
      return m_value;
   }
   Container() = default;
   Container(int value) :m_value(value) {};

   Container operator+(const Container& other)const {
      return Container(m_value + other.value());
   }
   bool operator<(const Container& other) const {
      return m_value < other.value();
   }
   bool operator>(const Container& other) const {
      return m_value > other.value();
   }
};
ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}


int main() {
   double vals[] = { 10.1, 5.5, 20.3, 50.4, 1.1 };
   int ivals[] = { 10, 5.5, 20, 50, 1 };
   Container cvals[] = { 10, 5.5, 20, 50, 1 };
   bbl_sort(vals, 5);
   prn_csv(vals, 5);
   bbl_sort(vals, 5, false);
   prn_csv(vals, 5);
   bbl_sort(ivals, 5);
   prn_csv(ivals, 5);
   bbl_sort(cvals, 5);
   prn_csv(cvals, 5);
   return 0;
}