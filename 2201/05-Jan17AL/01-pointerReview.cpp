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
   cout << m_name << " " <<  m_age << endl;
}

void printStudent(Student* sp) {
   sp->print();
}

int main() {
   int val;
   double* ptr;
   int* p;
   Student* sptr;
   Student S;
   S.set("Fred", 20);
   sptr = &S;
   p = &val;

   *p = 25;
   
   (*sptr).print();
   sptr->print();
   printStudent(sptr);
   cout << val << endl;
   cout << int(p) << endl;
   return 0;
}