#include <iostream>
using namespace std;
class Container {
   int* m_data{};
public:

   /*Container(const Container& C) = delete;
   Container& operator=(const Container& C) = delete;*/
   //rule of three
   Container(const Container& C) {
      // *this = C;
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
the sum template requires:
1- Rule of three supporting copy an copy assignment
2- operator + must work with the type

*/
template <typename type>
type sum(type x, type y) {
   return x + y;
}



int main() {
   int a, b = 30;
   double e, f = 20.3;
   Container R, C = 20,
      D = 50;

   a = sum(b, 40);
   cout << "a: " << a << endl;
   e = sum(f, 30.7234);
   cout << "b: " << e << endl;
   R = sum(C, D);
   cout << "R: " << R << endl;

   return 0;
}