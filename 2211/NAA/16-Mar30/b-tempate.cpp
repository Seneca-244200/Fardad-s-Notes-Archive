#include <iostream>
using namespace std;
class Container {
   int* m_data=nullptr;
public:
  // // rule of three
   Container(const Container& C) {
      if (C.m_data) {
         m_data = new int;
         *m_data = *C.m_data;
      }
     // *this = C;
    //  operator=(C);
   }
  // Container& operator=(const Container& C) {
  //    if (this != &C) {
  //       delete m_data;
  //       m_data = nullptr;
  //       if (C.m_data) {
  //          m_data = new int;
  //          *m_data = *C.m_data;
  //       }
  //    }
  //    return *this;
  // }
   virtual ~Container() {
      delete m_data;
   }
  // // end rule of three
   Container() {
   }
   Container(int data){
      m_data = new int;
      *m_data = data;
   }
   ostream& display(ostream& os)const {
      if(m_data) os << *m_data;
      return os;
   }
   Container operator+(const Container& R)const {
      return Container((m_data?*m_data:0) + (R.m_data?*R.m_data:0) );
   }
};
ostream& operator<<(ostream& os, const Container& C) {
   return C.display(os);
}


// the binary + operator must be defined for the type
// the type must be copyable safely (copy constructor)
template <typename type>
type sum(const type& x,const type& y) {
   return x + y;
}


// sorts list with the legnth of n
// type must support
// 65 def const
// 69,bool operator >
// 71 -> 73 copy assignment

template <typename type>
void sort(type list[], long n) {
   long c, d;
   type t;
   for (c = 0; c < n - 1; c++) {
      for (d = 0; d < n - c - 1; d++) {
         if (list[d] > list[d + 1]) {
            /* Swapping */
            t = list[d];
            list[d] = list[d + 1];
            list[d + 1] = t;
         }
      }
   }
}



int main() {
   double vals[]{ 2.1,5.2,3.3,7.4,8.5,3.6,4.7,5.8 };
   int a, b = 10;
   double e, f = 10.2;
   Container R, C(20),
      D = 50; // assignment at the moment of creation is NOT assignment,
              // but a one argument constructor
   a = sum(b, 20);
   cout << a << endl;
   e = sum(f, 20.3);
   cout << e << endl;

   cout << sum(C, D) << endl;
   sort(vals, 8L);
   for (long i = 0; i < 8L; i++) {
      cout << vals[i] << " ";
   }
   cout << endl;
}