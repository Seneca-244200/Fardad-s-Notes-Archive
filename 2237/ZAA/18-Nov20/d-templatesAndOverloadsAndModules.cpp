#include <iostream>
#include "Utils.h"
#include "myTemplates.h"
using namespace std;
using namespace sdds;
class Displayable {
public:
   virtual ostream& display(ostream& os)const = 0;
};
ostream& operator<<(ostream& ostr, const Displayable& D) {
   return D.display(ostr);
}
class Container : public Displayable{
   double m_data;
public:
   Container(double data = 0) :m_data{ data } {};
   Container operator+(const Container& Ro)const { // binary operator+ with not side effect
      return Container(m_data + Ro.m_data);
   }
   bool operator==(double value)const {
      return m_data - value > -0.001 && m_data - value < 0.001;
   }
   bool operator>(const Container& C)const {
      return m_data > C.m_data;
   }
   ostream& display(ostream& os)const {
      os.precision(2);
      os.setf(ios::fixed);
      return os << "Container(" << m_data <<")";
   }
};
class Mark : public Displayable {
   int m_data;
public:
   Mark(int data = 0) : m_data{ data } {
   }
   Mark operator+(const Mark& Ro)const {
      return Mark((m_data + Ro.m_data > 100) ? 100 : m_data + Ro.m_data);
   }
   bool operator==(int value)const {
      return m_data == value;
   }
   bool operator<(const Mark& C)const {
      return m_data < C.m_data;
   }
   ostream& display(ostream& os)const {
      return os << "Mark(" << m_data << ")";
   }
};


// overloads come first!!!
void sort(Mark array[], size_t size) {
   size_t i, j;
   for (i = 0; i < size - 1; i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (!(array[j] < array[j + 1])) {
            swap(&array[j], &array[j + 1]);
         }
      }
   }
}


int main() {
   int ia[]{ 1, 3,3,4,3,5,6,3,8,3 };
   Container ca[]{
      Container(100.1),
      Container(200.25),
      Container(100.1),
      Container(5.1),
      Container(3.12),
      Container(100.1),
      Container(234.1),
      Container(100.1)
   };
   Mark ma[]{
      Mark(10),
      Mark(60),
      Mark(100),
      Mark(60),
      Mark(80)
   };
   size_t m60 = count(ma, 5, 60);
   sort(ma, 5);
   display(ma, 5);
   cout << "Number of mark with value 60: " << m60 << endl;
   cout << endl << "---------------------" << endl << endl;
   size_t noOf100_1 = count(ca, 8, 100.1);
   sort(ca, 8);
   display(ca, 8);
   cout << "Number of containers with 100.1 capacity: " << noOf100_1 << endl;
   cout << endl << "---------------------" << endl << endl;
   size_t noOf3 = count(ia, 10, 3);
   sort(ia, 10);
   display(ia, 10);
   cout << "Number of integer with value of 3: " << noOf3 << endl;
   cout << endl << "---------------------" << endl << endl;
   return 0;
}