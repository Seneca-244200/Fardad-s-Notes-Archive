#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class Container {
   int* m_data{};
public:
   //Container(int data) {
   //   m_data = new int;   // object allocation
   //   *m_data = data;     // setting to value
   //}
   //Container(int data) {
   //   m_data = new int(data); // sets the attribute t0 an object allocation and initialization
   //}
   Container(int data=0):m_data(new int(data)) { }  // initializing the attribute with an object allocation and initialization
   virtual ~Container() {
      delete m_data;
   }
   /*Container(const Container& C) = delete;
   Container& operator=(const Container& C) = delete;*/
   Container operator+(const Container& R)const {
      return Container(*m_data + *R.m_data);
   }
   Container(const Container& C) {
      operator=(C);
   }
   Container& operator=(const Container& C) {
      if (this != &C) {
         delete m_data;
         m_data = new int(*C.m_data);
      }
      return *this;
   }
   ostream& display(ostream& os)const {
      return os << "C" << *m_data;
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}


/*
// 1- Rule of three must work with the type
// 2 - Type should work with binary + operator
*/
template <typename type>
type sum(type x, type y) {
   return x + y;
}



int main() {
   int a, b = 30;
   double e, f = 20.3;
   Container R, C = 20, D = 30;


   e = sum(f, 30.7234);
   cout << "e: " << e << endl;
   a = sum(b, 40);
   cout << "a: " << a << endl;
   R = sum(C, Container(10)); // sum(Container x = C, Container y = 10);
   //R = sum(C, D);
   cout << "R: " << R << endl;

   return 0;
}