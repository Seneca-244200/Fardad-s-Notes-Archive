#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Container {
   int m_value{};
public:
   int value()const {
      return m_value;
   }
   Container() = default;
   Container(int value):m_value(value) {}
   Container operator+(const Container& other)const {
      return Container(m_value + other.value());
   }
};
ostream& operator<<(ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}

template <typename type>
type add(type a, type b) {
   return a + b;
}

template <>
char* add<char*>(char* a, char* b) {// specialized template for a <char*>
   char* res = new char[strlen(a) + strlen(b) + 1];
   strcpy(res, a);
   strcat(res, b);
   return res;
}

int main() {
   char* both;
   char name[] = "Fred";
   char surname[] = "Soley";
   Container C = 20, D;
   int a = 10, b;
   double x = 10.1, y;
   b = add(a, 30);
   cout << b << endl;

   y = add(x, 30.2);
   cout << y << endl;

   D = add(C, Container(50)); // D = add(C, Container(50));
   cout << D << endl;
  
   both = add(name, surname);

   cout << both << endl;
   delete[] both;
   return 0;
}