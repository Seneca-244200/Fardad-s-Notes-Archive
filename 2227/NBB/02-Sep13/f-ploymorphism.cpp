#include <iostream>
#include <cstring>
using namespace std;
struct Customer {
   char m_name[81];
   int m_age;
   void setName() {
      cin >> m_name;
   }
   void setName(const char* name) {
      strcpy(m_name, name);
   }
   void setAge() {
      cin >> m_age;
   }
   void introduceYourself() {
      cout << "Hello, my name is " << m_name
         << " and I am " << m_age << " years old!" << endl;
   }
   bool legalAge() {
      return m_age >= 19;
   }
};

int main() {
   Customer C;
   C.setName("Jack");
   cout << "How old are you ? ";
   C.setAge();
   C.introduceYourself();
   if (C.legalAge()) {
      cout << "What would you like to drink?" << endl;
   }
   else {
      cout << "Get out of here..." << endl;
   }
   return 0;
}