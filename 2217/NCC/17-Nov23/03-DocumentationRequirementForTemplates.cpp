#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
class Mark {
   int m_value;
public:
   Mark(int data = 0) :m_value(data) {
   }
   ostream& display(ostream& os)const {
      return os << "M" << m_value;
   }
   Mark operator+(const Mark& R)const {
      return Mark(m_value + R.m_value);
   }
};
ostream& operator<<(ostream& os, const Mark& C) {
   return C.display(os);
}

class Container {
   int* m_data{};
public:

   //Container(const Container& C) = delete;
   //Container& operator=(const Container& C) = delete;
   //rule of three
   Container(const Container& C) {
      operator=(C);
   }
   Container& operator=(const Container& C) {
      if (this != &C) {
         delete m_data;
         m_data = nullptr;
         if (C.m_data) {
            m_data = new int;
            *m_data = *C.m_data;
         }
      }
      return *this;
   }
   virtual ~Container() {
      delete m_data;
   }
   //  end rule of three
   Container() {
   }
   //Container(int data) {
   //   //logic 1
   //   // m_data = new int(data);  // one constructor
   //   //logic 2 
   //   m_data = new int;           // default const and copy assingment afterwards
   //   *m_data = data;
   //}
   // logic 3
   Container(int data) :m_data(new int(data)) {  // in initialization area
   }
   ostream& display(ostream& os)const {
      if (m_data)
         os << *m_data;
      else
         os << 0;
      return os;
   }
   Container operator+(const Container& R)const {
      return Container((m_data ? *m_data : 0) + (R.m_data ? *R.m_data : 0));
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}


/*
* 81 and 82: The Template type needs to comply with rule of three
* 82: The Template type requires to work with binary + operator.
*      type = type + type defined
*/
template <typename ChangeMe>
ChangeMe sum(ChangeMe x, ChangeMe y) {
   return x + y;
}



int main() {
   int a, b = 30;
   double e, f = 20.3;
   Container C, D = 40, E = 50;
   Mark M, N=45, O=22;
   a = sum(b, 40);
   cout << "a: " << a << endl;
   e = sum(f, 40.1234);
   cout << "e: " << e << endl;
   C = sum(D, E);
   cout << "C: " << C << endl;
   M = sum(N, O);
   cout << "M: " << M << endl;
   return 0;
}