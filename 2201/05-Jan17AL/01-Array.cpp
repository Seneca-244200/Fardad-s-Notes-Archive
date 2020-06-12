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
   int a[5] = { 100, 200, 300, 400, 500 };
   cout << a[0] << endl;
   cout << *a << endl;
   cout << int(a) << endl;
   return 0;
}