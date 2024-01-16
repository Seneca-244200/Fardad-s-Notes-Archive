#include <iostream>
using namespace std;
//1-  if Base requires rule of three but Derivde does not, there 
//    is no need to implement the rule of three for derived



class Base {
   char m_data; // initializing m_data with '?'
public:
   Base() :m_data('B') {  // initializing m_data with 'B'
      clog << "Defaulting Base to " << 'B' << endl;
   };
   //Base()  {
   //   m_data = 'B';  // overwriting m_data with B
   //   clog << "Defaulting Base to " << 'B' << endl;
   //};

   Base(char data) :m_data(data) {
      clog << "Base[" << data << "] One Arg Constr" << endl;
   }
   Base(const Base& B) {
      clog << "Base[" << B.m_data << "] Copy" << endl;
      m_data = B.m_data;
   }
   
   Base& operator=(const Base& B) {
      clog << "Base[" << m_data << "] Assigned to [" << B.m_data << "]" << endl;
      if (this != &B) m_data = B.m_data;
      return *this;
   }

   virtual ~Base() {
      clog << "~Base[" << m_data << "]" << endl;
   }

   virtual ostream& show(ostream& ostr = cout)const {
      return ostr << "Base[" << m_data << "]";
   }

};
ostream& operator<<(ostream& ostr, const Base& B) {
   return B.show(ostr);
}


               // : public  means IS A
class Derived : public Base {
   char m_data = '?';
public:
   Derived() :m_data('D') {
      clog << "Defaulting Derived to " << 'D' << endl;
   }

   Derived(char data) :Base(data + 1), m_data(data) {
      clog << "Derived[" << data << "] One Arg Constr" << endl;
   }

  /* Derived(const Derived& D) {
      clog << "Derived[" << D.m_data << "] Copy" << endl;
      m_data = D.m_data;
   }

   Derived& operator=(const Derived& D) {
      clog << "Derived[" << m_data << "] Assigned to [" << D.m_data << "]" << endl;
      if (this != &D) m_data = D.m_data;
      return *this;
   } */

   virtual ~Derived() {
      clog << "~Derived[" << m_data << "]" << endl;
   }

   virtual ostream& show(ostream& ostr = cout)const {
      ostr << "Derived[" << m_data << "] holding ";
      return Base::show(ostr) << " inside!";
   }
};

void show(Derived D) { // copy constructor or Derived will be called
   cout << D << endl;
}
// if the base needs rule of three
// derive class does not implement the rule of three but 
// the base does

int main() {
   clog << "----Default A----" << endl;
   Derived A;
   clog << "----One Arg B to 'X' value----" << endl;
   Derived B = 'X';
   clog << "----Copy B to C----" << endl;
   Derived C = B;
   clog << "----Assing A to B----" << endl;
   A = B;

   cout << "A:\n" << A << endl;
   cout << "B:\n" << B << endl;
   cout << "C:\n" << C << endl;


   return 0;
}
