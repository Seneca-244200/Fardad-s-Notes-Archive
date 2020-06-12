#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Student {
private:
   char m_name[21];
   int m_age;
public:
   void set(const char name[], int age);
   void print();
};
void Student::set(const char name[], int age) {
   strcpy(m_name, name);
   m_age = age;
}
void Student::print() {
   cout << m_name << endl;
   cout << m_age << endl;
}

int main() {
   int val;
   int* ptr;
   Student* sptr;
   Student S;
   S.set("Fred", 20);
   sptr = &S;
   S.print();         // potatos
   sptr->print();     //potaatos
   ptr = &val;
   *ptr = 25;
   cout << val;
   return 0;
}