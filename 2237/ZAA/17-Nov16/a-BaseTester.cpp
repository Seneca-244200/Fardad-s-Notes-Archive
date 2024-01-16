#include <iostream>
using namespace std;

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


class Derived : public Base {
   char m_data = '?';
public:
   Derived() :m_data('D') {
      clog << "Defaulting Derived to " << 'D' << endl;
   }

   Derived(char data = 'D') :Base(data + 1), m_data(data) {
      clog << "Derived[" << data << "] One Arg Constr" << endl;
   }

   Derived(const Derived& D) {
      clog << "Derived[" << D.m_data << "] Copy" << endl;
      m_data = D.m_data;
   }

   Derived& operator=(const Derived& D) {
      clog << "Derived[" << m_data << "] Assigned to [" << D.m_data << "]" << endl;
      if (this != &D) m_data = D.m_data;
      return *this;
   }

   virtual ~Derived() {
      clog << "~Derived[" << m_data << "]" << endl;
   }

   virtual ostream& show(ostream& ostr = cout)const {
      ostr << "Derived[" << m_data << "] holding ";
      return Base::show(ostr) << " inside!";
   }
};

void show(Derived D) {
   cout << D << endl;
}

int main() {

   //clog.setstate(ios::failbit);

   /* initialization and setting 
   
   int i = 10;


   int j;
   j = 10;
   */



   // Assignment at the moment of creation is a call to a ONE ARG
   // Constructor
   Base B = 'X'; // same as Base B('X'); and Base B{'X'} and Base B={'X'};

   cout << B << endl;
   return 0;
}
