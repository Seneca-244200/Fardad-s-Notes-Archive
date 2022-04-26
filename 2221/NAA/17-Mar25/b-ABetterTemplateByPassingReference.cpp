#include <iostream>
#include <iomanip>
#include "Utils.h"
using namespace std;
using namespace sdds;
class Mark {
   int m_data;
public:
   Mark(int data = 0) : m_data{ data } {
   }
   Mark operator+(const Mark& Ro)const {
      return Mark(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Mk: " << m_data;
   }
};
ostream& operator<<(ostream& os, const Mark& c) {
   return c.display(os);
}

class Pop {
   int m_data;
public:
   Pop(int data = 0) :m_data(data) {
   }
   Pop operator+(const Pop& Ro)const {
      return Pop(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "P: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Pop& C) {
   return C.display(os);
}


class Container {
   int m_data;
public:
   Container(int data = 0) :m_data(data) {
   }
   Container add(const Container& Ro)const {
      return Container(m_data + Ro.m_data);
   }
   ostream& display(ostream& os)const {
      return os << "Cn: " << m_data;
   }
};

ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}


/*
The type must supprot binary operator +
The type must supprot copy construction
*/
template <typename type>
type sum(const type& a,const type& b) {
   return a + b;
}

// overloads have higher priority to templates
Container sum(const Container& a,const Container& b) {
   return a.add(b);
}

int main() {
   double x = 1.1, y{ 2.2 }, z{};
   int i = 1, j{ 2 }, k{};
   Mark m = 50, n{ 30 }, o{};
   Container c = 100, d{ 200 }, e{};
   Pop p = 12345, q{ 345678 }, r;
   z = sum(x, y);
   cout << z << endl;
   k = sum(i, j);
   cout << k << endl;
   o = sum(m, n);
   cout << o << endl;
   e = sum(c, d);
   cout << e << endl;
   r = sum(p, q);
   cout << r << endl;
   return 0;
}