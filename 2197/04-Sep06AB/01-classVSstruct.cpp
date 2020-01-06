#include <iostream>
using namespace std;
struct Student {
   char name[21];
   int age;
};
class Employee {
   char name[21];
   int age;
public:
   void setAge(int value) {
      if (value < 0 || value > 100) {
         age = -1;
      }
      else {
         age = value;
      }
   }
   int getAge() {
      return age;
   }
};
int main() {
   Student S;
   Employee E;
   S.age = 25;
   E.setAge(25);
   return 0;
}