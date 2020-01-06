#include <iostream>
#include <cstring>
using namespace std;
struct Student {
   char name[21];
   int age;
};
class Employee {
   char m_name[21];
   int m_age;
public:
   void set(const char* name, int age) {
      setName(name);
      setAge(age);
   }
   void setName(const char* name) {
      strcpy(m_name, name);
   }
   void setAge(int age) {
      if (age < 0 || age > 100) {
         age = -1;
      }
      else {
         m_age = age;
      }
   }
   int getAge() {
      return m_age;
   }
};

int main() {
   Student S;
   Employee E;
   S.age = 250;
  // E.age = 25;
   E.setAge(250);
   return 0;
}