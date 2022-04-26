#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
class Container {
   int m_value;
public:
   Container(int value = 0) {
      operator=(value);
   }
   //                       right operand
   // *this is the left operand
   Container& operator=(int value) {
      m_value = value;
      return *this;
   }
   int get()const {
      return m_value;
   }
   bool operator!()const {
      return m_value <= 0;
   }
   // the single operand is *this
   ostream& operator~()const {
      cout << "Cn[";
      cout.width(9);
      cout.fill('0');
      cout.setf(ios::right);
      cout << get();
      cout.fill(' ');
      cout.unsetf(ios::right);
      cout << "]";
      return cout;
   }
   Container& operator+=(const Container& C) {
      m_value += C.m_value;
      return *this;
   }
   //                    right operator
   // *this is the left operand;
   Container& operator+=(int value) {
      m_value += value;
      return *this;
   }
   //                    right operator
   // *this is the left operand; 
   // return value is a temp nameless Container
   Container operator+(const Container& C) {
      Container temp(m_value + C.m_value);
      return temp;
   }
};

void displayAll(const char* prompt, 
                const Container& C, 
                const Container& D, 
                const Container& E) {
   cout << prompt << endl;
   cout << "C: ";
   //C.display();
   ~C;
   cout << " D: ";
   //D.display();
   ~D;
   cout << " E: ";
   //E.display() << endl;
   ~E << endl;
}
int main() {
   Container C = 1234;
   Container D = 100000;
   Container E;
   if (!E) {
      cout << "Container is empty!";
      ~E << endl;
   }

   displayAll("Aftere Construction: ",C, D, E);
   // C = 3456;
   //C.operator=(3456);
   C = 3456;
   displayAll("C.set(3456)", C, D, E);
   // C += 10000;
   // C.operator+=(10000);
   C += 10000;
   displayAll("C.add(10000);", C, D, E);
   // E = C + D;
   // E = C.operator+(D);
   E = C + D;
   displayAll("E = C.addWithNoSideEffect(D)", C, D, E);
   // C += D;
   //C.operator+=(D);
   C += D;
   displayAll("C.add(D)", C, D, E);

   return 0;
}

