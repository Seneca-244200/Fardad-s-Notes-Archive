#include <iostream>
#include "Utils.h"
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
   ostream& display(ostream& os)const {
      return os << "Mark(" << m_data << ")";
   }
};

// the type is a placeholder that is to be
// changed with the type based on the usage
// of the fucntion
template <typename type>
type addAndDisplay(type a, type b) {
   type c = a + b;
   cout << "Sum is: " << c << endl;
   return c;
}

//template<class ArrayType, class KeyType> //  Old C++
template<typename ArrayType, typename KeyType>
size_t count(const ArrayType array[], size_t size, KeyType key) {
   size_t cnt{};
   for (size_t i = 0; i < size; i++) {
      if (array[i] == key) cnt++;
   }
   return cnt;
}

template<typename ArrayType>
void display(const ArrayType array[], size_t size) {
   for (size_t i = 0; i < size; i++) {
      if (i != 0) cout << ", ";
      cout << array[i];
   }
   cout << endl;
}

/* replaced by one template
size_t count(const Container array[], size_t size, double key) {
   size_t cnt{};
   for (size_t i = 0; i < size; i++) {
      if (array[i] == key) cnt++;
   }
   return cnt;
}

size_t count(const Mark array[], size_t size, int key) {
   size_t cnt{};
   for (size_t i = 0; i < size; i++) {
      if (array[i] == key) cnt++;
   }
   return cnt;
}

size_t count(const int array[], size_t size, int key) {
   size_t cnt{};
   for (size_t i = 0; i < size; i++) {
      if (array[i] == key) cnt++;
   }
   return cnt;
}
*/



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
   size_t noOf100_1 = count(ca, 8, 100.1);
   display(ca, 8);
   cout << "Number of containers with 100.1 capacity: " << noOf100_1 << endl;
   size_t noOf3 = count(ia, 10, 3);
   display(ia, 10);
   cout << "Number of integer with value of 3: " << noOf3 << endl;
   return 0;
}