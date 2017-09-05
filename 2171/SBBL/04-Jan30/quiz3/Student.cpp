#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;
void Student::name(const char* value) {
   strcpy(m_name, value);
}
const char* Student::name()const {
   return m_name;
}
void Student::stno(int value) {
   m_stno = value;
}
int Student::stno()const {
   return m_stno;
}
void Student::display()const {
   cout << name() << ", " << stno() << endl;
}
