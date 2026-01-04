#include <iostream>
using namespace std;
class Base {
   int m_data;
public:
   Base() {
      m_data = 1;
      cout << "Base Default" << endl;
   }
   Base(int data) :m_data(data) {
      cout << "Base(" << data << ")" << endl;
   }
   Base(const Base& other) :m_data{ other.m_data + 5 } {
      cout << "CpBase(" << m_data << ")" << endl;
   }
   const Base& operator=(const Base& other) {
      m_data = other.m_data * 2;
      cout << "Op=Base(" << other.m_data << ")x2" << endl;
      return *this;
   }
   virtual ~Base() {
      cout << "~Base(" << m_data << ")" << endl;
   }
   virtual ostream& print(ostream& ostr)const {
      return ostr << "B(" << m_data <<")";
   }
};
ostream& operator<<(ostream& ostr, const Base& other) {
   return other.print(ostr);
}
class Derived :public Base {
   int m_data;
public:
   Derived() {
      m_data = 100;
      cout << "Derived default" << endl;
   }
   Derived(int d_data, int b_data = 1):Base(b_data){
      m_data = d_data;
      cout << "Derived(" << m_data << ")" << endl;
   }
   Derived(const Derived& other):Base(other) {
      m_data = other.m_data+10;
      cout << "Derived(" << m_data << ")" << endl;
   }
   Derived& operator=(const Derived& other) {
      Base::operator=(other);
      m_data = other.m_data*2;
      cout << "Op=Derived(" << m_data << ")x2" << endl;
      return *this;
   }
   virtual ostream& print(ostream& ostr)const {
      Base::print(ostr) << endl;
      return ostr << "D(" << m_data << ")";
   }
   virtual ~Derived() {
      cout << "~Derived(" << m_data << ")" << endl;
   }

};

void display(const Derived& D, const char* name) {
   cout << name <<":----" << endl << D << endl << "------" << endl;
}


int main() {
   cout << "OOP244 NAA" << endl;
   Derived A;
   display(A, "A");
   Derived B(2000, 1000);
   display(B, "B");
   A = B;
   display(A, "A After op=");
   return 0;
} 

/* if base has resourse but the derived does not
* no need to implement rule of three
*  if derive hase resources 
*  when applying rule of three for derive, 
*  you must explicitly envoke the base's copy constructor
*  and operator= to make sure base's is envoked
* 
*/

