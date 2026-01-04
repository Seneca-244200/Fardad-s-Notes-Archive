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
  
   int a = 10;

   cout << add<Container>(a, 30) << endl;

   return 0;
}