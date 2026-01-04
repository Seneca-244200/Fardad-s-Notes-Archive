#include <cstring>
using namespace std;
class Container {
   int m_value = 0;
   int m_capacity=100;
   char* m_content{};
public:
   Container() = default;
   Container(int value) :m_value(value) {
   }
   Container(int capacity, int value) :m_value(value), m_capacity(capacity) {
   }
   Container(const char* content, int value) :m_value{ 0 }, m_content{ new char[strlen(content) + 1] } {
      strcpy(m_content, content);
   }
   ~Container() {
      delete[] m_content;
   }
};

int main() {
   int i{ 4 };
   Container C;
   Container D = 50;
   Container E(60);
   Container E1{ 70 };
   Container E2 = { 90 };
   Container F(20, 30);
   Container G = { 30, 60 };
   Container H{ 90, 900 };
   return 0;
}