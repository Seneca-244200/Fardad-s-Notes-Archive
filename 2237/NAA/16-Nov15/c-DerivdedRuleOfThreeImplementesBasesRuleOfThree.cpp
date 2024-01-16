#include <iostream>
using namespace std;
class Base {
   char m_data = '?';
public:
   Base() :m_data('B') {};
   Base(char data) :m_data(data) {}
   Base(const Base& B) {
      cout << "Base ["<< B.m_data << "] Copy" << endl;
      m_data = B.m_data;
   }
   Base& operator=(const Base& B) {
      cout << "Base [" << m_data << "] Assigned to [" <<B.m_data << "]" <<  endl;
      if (this != &B) m_data = B.m_data;
      return *this;
   }
   virtual ~Base() {
      cout << "~Base [" << m_data << "]" << endl;
   }
   virtual ostream& show(ostream& ostr= cout)const {
      return ostr << "Base[" << m_data << "]";
   }
};
ostream& operator<<(ostream& ostr, const Base& B) {
   return B.show(ostr);
}
class Derived : public Base {
   char m_data = '?';
public:
   Derived():m_data('D'){}
   Derived(char data) :Base(data+1), m_data(data) {}
   Derived(const Derived& D):Base(D) {
      cout << "Derived [" << D.m_data << "] Copy" << endl;
      m_data = D.m_data;
   }
   //Derived(const Derived& D) :Base(D.m_data+1) {
   //   cout << "Derived [" << D.m_data << "] Copy" << endl;
   //   m_data = D.m_data;
   //}
   //Derived(const Derived& D) {
   //   Base::operator=(D);
   //   cout << "Derived [" << D.m_data << "] Copy" << endl;
   //   m_data = D.m_data;
   //}

   Derived& operator=(const Derived& D) {
      cout << "Derived [" << m_data << "] Assigned to [" << D.m_data << "]" << endl;
      if (this != &D) {
         Base::operator=(D);
         m_data = D.m_data;
      }
      return *this;
   }
   virtual ~Derived() {
      cout << "~Derived [" << m_data << "]" << endl;
   }
   virtual ostream& show(ostream& ostr = cout)const {
      ostr << "Derived[" << m_data << "] holding ";
      return Base::show(ostr) << " inside!";
   }
};

void show(Derived D) {
   Derived A = 'a';
   cout << D << endl;
   A = D;
   cout << A << endl;
}
/*
* If the Derived class needs and implements the Rule of three, The base classes
* Rule of three will NOT be invoked automatically and must be invoked manually
*/
int main() {
   Derived X('X');
   show(X); // show(Derived D = X);
   return 0;
}
