#include <iostream>
using namespace std;
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
  /* Container sum(const Container& other)const {
      return Container(m_value + other.value());
   }*/
};
ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}

template <typename type>    // parametric polymorphism   // universal 
type add(type a, type b){
   return a + b;
}


int main() {
   cout << "OOP244 NBB - Mar 23" << endl;
   int i = 100, j = 200, k;
   double m = 10.10, n = 30.30, o;
   Container C = 20, D = 10, E;
   k = add(i, j); // add_int_int

   cout << k << endl;

   o = add(m, n); // add_double_double

   cout << o << endl;

   E = add(C, D); // add_Container_Container

   cout << E << endl;

   return 0;
}