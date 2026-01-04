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
   Derived(const Derived& other):Base(other) {
      m_data = other.m_data+10;
      cout << "Derived(" << m_data << ")" << endl;
   }
   Derived& operator=(const Derived& other) {
      m_data = other.m_data;
      cout << "Op=Derived(" << m_data << ")" << endl;
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
   Derived B = A;
   display(B, "B");
   return 0;
} 