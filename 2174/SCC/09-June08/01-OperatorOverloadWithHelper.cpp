

#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container(int value =0) {
       set(value);
   }

   Container& operator++() {
      m_value++;
      return *this;
   }

   Container& operator+=(const Container& C) {
      m_value += C.m_value;
      return *this;
   }
   void set(int value) {
      m_value = value;
   }
   void display() {
      cout << m_value;
   }
};


Container operator+(const Container& C1, const Container& C2) {
   Container res = C1;
   res+=C2;
   return res;
}

int main() {
   Container C(10), D(5), E, F;
   C.display();
   cout << endl;
   //C.operator++(); //++C;
   F = ++C;
   C.display();
   cout << endl;
   F.display();
   cout << endl;
   //C.operator+=(D); // C += D;
   F = C += D;
   C.display();
   cout << endl;
   F.display();
   cout << endl;
   //E = operator+(C, D);  // E = C + D;
   E = C + D;
   E.display();
   cout << endl;
   return 0;
}


