#include <iostream>
#include "sort.h"
using namespace std;
using namespace sdds;
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
         os << "C" << *m_data;
      else
         os << "C0";
      return os;
   }
   bool operator>(const Container& ro)const {
      return (m_data ? *m_data : 0) > (ro.m_data ? *ro.m_data : 0);
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

/*
102, nothing
104, type should be pritable on cout
*/
template <typename type>
void showArray(type* array, long size) {
   for (int i = 0; i < size; i++) {
      cout << array[i];
      if (i != size - 1) cout << ",";
   }
   cout << endl;
}

int main() {
   double vals[]{ 2.1,5.2,3.3,7.4,8.5,3.6,4.7,5.8 };
   int ivals[]{ 2,5,3,7,8,3,4,5,9,1 };
   Container C[]{ 2,5,3,7,8,3,4};
   sort(vals, 8);
   sort(ivals, 10);
   sort(C, 7);
   showArray(vals, 8);
   showArray(ivals, 10);
   showArray(C, 7);
   return 0;
}